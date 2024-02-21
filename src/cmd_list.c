/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:31:01 by vvaudain          #+#    #+#             */
/*   Updated: 2024/02/21 11:07:21 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

t_cmd	*find_last(t_cmd **head)
{
	t_cmd	*cur_cmd;

	cur_cmd = (*head);
	while (cur_cmd->next != NULL)
		cur_cmd = cur_cmd->next;
	return (cur_cmd);
}

t_cmd	*new_command(t_data *data)
{
	t_cmd	*new_cmd;

	new_cmd = malloc(sizeof(t_cmd));
	if (!new_cmd)
	{
		free_all(data);
		exit (EXIT_FAILURE);
	}
	new_cmd->cmd = NULL;
	new_cmd->args = NULL;
	new_cmd->prev = NULL;
	new_cmd->next = NULL;
	return (new_cmd);
}

void	create_list(t_data *data)
{
	t_list	*cmd_list;

	cmd_list = malloc(sizeof(t_list));
	if (!cmd_list)
	{
		ft_error(3);
		free_all(data);
		exit (EXIT_FAILURE);
	}
	if (cmd_list)
	{
		cmd_list->len = 0;
		cmd_list->head = NULL;
	}
	data->cmd_list = cmd_list;
}
//we fill the command's structure -- its args etc.

t_cmd	*init_cmd(t_cmd *cmd, t_data *data, char **av, int i)
{
	if (data->is_here_doc == 1 && data->ac == 6)
	{
		if (data->cmd_list->len == 0)
			cmd->cmd = av[3];
		else
			cmd->cmd = av[4];
	}
	else if (data->is_here_doc == 0 && data->ac >= 5)
	{
		if (data->cmd_list->len == 0)
			cmd->cmd = av[2];
		else
			cmd->cmd = av[2 + i];
	}
	cmd->args = ft_split(cmd->cmd, ' ');
	if (!cmd->args)
	{
		free_all(data);
		exit (EXIT_FAILURE);
	}
	return (cmd);
}

void	fill_cmd_list(t_data *data, char **av)
{
	int		i;
	t_cmd	*new_cmd;
	t_cmd	*last_cmd;

	i = 0;
	create_list(data);
	while (i < data->nb_of_cmds)
	{
		new_cmd = new_command(data);
		if (data->cmd_list->head == NULL)
		{
			data->cmd_list->head = init_cmd(new_cmd, data, av, i);
			data->cmd_list->len += 1;
		}
		else
		{
			last_cmd = find_last(&data->cmd_list->head);
			last_cmd->next = init_cmd(new_cmd, data, av, i);
			last_cmd->next->prev = last_cmd;
			data->cmd_list->len += 1;
		}
		i++;
	}
}
