/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:04:34 by vvaudain          #+#    #+#             */
/*   Updated: 2024/02/21 14:30:24 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

void	free_split(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free (tab[i]);
		i++;
	}
	free (tab);
}

void	free_all(t_data *data)
{
	t_cmd	*cur_cmd;
	t_cmd	*temp;

	if (data->cmd_list != NULL)
	{
		cur_cmd = data->cmd_list->head;
		while (cur_cmd != NULL)
		{
			if (cur_cmd->args != NULL)
				free_split(cur_cmd->args);
			temp = cur_cmd->next;
			free(cur_cmd);
			cur_cmd = temp;
		}
		free (data->cmd_list);
	}
	if (data->path)
		free(data->path);
	if (data->splitted_paths)
		free_split(data->splitted_paths);
}
