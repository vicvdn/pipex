/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:23:04 by victoirevau       #+#    #+#             */
/*   Updated: 2024/02/21 16:05:42 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

// void	print_list(t_cmd **head)
// {
// 	t_cmd	*cur_cmd;

// 	if (head == NULL)
// 	{
// 		ft_printf("empty list");
// 		return ;
// 	}
// 	cur_cmd = (*head);
// 	while (cur_cmd != NULL)
// 	{
// 		ft_printf("address: %p\n", cur_cmd);
// 		ft_printf("cmd : %s\n", cur_cmd->cmd);
// 		ft_printf("prev-> %p\n", cur_cmd->prev);
// 		ft_printf("next-> %p\n", cur_cmd->next);
// 		ft_printf("\n");
// 		cur_cmd = cur_cmd->next;
// 	}
// }

void	pipex(t_data *data)
{
	int		i;

	i = 0;
	data->id1 = fork();
	if (data->id1 < 0)
		return (perror("Error using fork()."));
	else if (data->id1 == 0)
	{
		i = 1;
		child_process(data, i);
	}
	data->id2 = fork();
	if (data->id2 < 0)
		return (perror("Error using fork()."));
	else if (data->id2 == 0)
	{
		i = 2;
		child_process(data, i);
	}
	close(data->pipe_ends[0]);
	close(data->pipe_ends[1]);
	waitpid(data->id1, NULL, 0);
	waitpid(data->id2, NULL, 0);
}

// int	main(int ac, char **av, char **envp)
// {
// 	t_data	data;
// 	// int		pipe_fd[2];

// 	ft_parsing(ac, av, &data);
// 	init_pipex(av, envp, &data, ac);
// 	data.nb_of_cmds = 2;
// 	fill_cmd_list(&data, av);
// 	if (pipe(data.pipe_ends) == -1)
// 		return (perror("Error executing pipe()."), 1);
// 	// data.pipe_ends[0] = pipe_fd[0];
// 	// data.pipe_ends[1] = pipe_fd[1];
// 	pipex(&data);
// 	wait(NULL);
// 	wait(NULL);
// 	close(data.pipe_ends[0]);
// 	close(data.pipe_ends[1]);
// 	free_all(&data);
// }

int	main(int ac, char **av, char **envp)
{
	t_data	data;

	ft_parsing(ac, av, &data);
	init_pipex(av, envp, &data, ac);
	data.nb_of_cmds = 2;
	fill_cmd_list(&data, av);
	if (pipe(data.pipe_ends) == -1)
		return (perror("Error executing pipe()."), 1);
	pipex(&data);
	// wait(NULL);
	// wait(NULL);
	// close(data.pipe_ends[0]);
	// close(data.pipe_ends[1]);
	free_all(&data);
}
