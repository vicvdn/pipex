/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:11:16 by vvaudain          #+#    #+#             */
/*   Updated: 2024/02/21 16:09:28 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

void	get_exec_paths(t_data *data, char **env)
{
	int	i;

	i = 0;
	while (env[i])
	{
		if (ft_strncmp(env[i], "PATH=", 5) == 0)
		{
			data->path = ft_strdup(env[i] + 5);
			if (!data->path)
			{
				ft_printf("Error getting the path\n");
				free_all(data);
				exit(EXIT_FAILURE);
			}
			ft_printf("%s", data->path);
		}
		i++;
	}
	data->splitted_paths = ft_split(data->path, ':');
	if (!data->splitted_paths)
	{
		ft_error(3);
		free_all(data);
		exit(EXIT_FAILURE);
	}
}

void	check_if_dir(t_data *data, char *file)
{
	int	fd;

	fd = open(file, __O_DIRECTORY);
	if (fd > 0)
		ft_exit(data, file, 0);
}

void	check_file_for_fd(t_data *data, int i, char *file)
{
	check_if_dir(data, file);
	if (access(file, F_OK) == 0)
	{
		if (access(file, R_OK | W_OK) == 0)
		{
			data->fds[i - 1] = open(file, O_RDONLY);
			if (data->fds[i - 1] < 0)
				ft_exit(data, file, 1);
		}
		else
			ft_exit(data, file, 1);
	}
	else
	{
		if (i == 2)
		{
			data->fds[1] = open(file, O_CREAT, 0644);
			if (data->fds[1] < 0)
				ft_exit(data, file, 1);
		}
		else
			ft_exit(data, file, 1);
	}
}

void	exec_command(t_data *data, int i, t_cmd *cmd_node)
{
	if (access(cmd_node->cmd, F_OK | X_OK) == 0)
	{
		get_exec_paths(data, data->env);
		if (i == 1)
		{
			if (dup2(data->fds[0], STDIN_FILENO) < 0
				|| dup2(data->pipe_ends[1], STDOUT_FILENO) < 0)
				ft_exit(data, data->infile, 1);
			close(data->pipe_ends[0]);
			close(data->fds[0]);
			if (data->fds[1] != -1)
				close(data->fds[1]);
			ft_exec(data, data->cmd_list->head);
		}
		else if (i == 2)
		{
			if (dup2(data->fds[1], STDOUT_FILENO) < 0
				|| dup2(data->pipe_ends[0], STDIN_FILENO) < 0)
				ft_exit(data, data->outfile, 1);
			close(data->pipe_ends[1]);
			close(data->fds[1]);
			if (data->fds[0] != -1)
				close(data->fds[0]);
			ft_exec(data, data->cmd_list->head->next);
		}
	}
}

// void	child_process(t_data *data, int i)
// {
// 	if (i == 1)
// 	{
// 		check_file_for_fd(data, i, data->infile);
// 		if (access(data->cmd_list->head->cmd, F_OK | X_OK) == 0)
// 			execve(data->cmd_list->head->cmd,
// 				data->cmd_list->head->args, data->env);
// 	}
// 	else if (i == 2)
// 	{
// 		check_file_for_fd(data, i, data->outfile);
// 		if (access(data->cmd_list->head->next->cmd, F_OK | X_OK) == 0)
// 			execve(data->cmd_list->head->next->cmd,
// 				data->cmd_list->head->next->args, data->env);
// 	}
// }

void	child_process(t_data *data, int i)
{
	char	*file;
	t_cmd	*cmd_to_exec;

	if (i == 1)
	{
		file = data->infile;
		cmd_to_exec = data->cmd_list->head;
	}
	else
	{
		file = data->outfile;
		cmd_to_exec = data->cmd_list->head->next;
	}
	check_file_for_fd(data, i, file);
	exec_command(data, i, cmd_to_exec);
}
