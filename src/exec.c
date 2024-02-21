/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:17:40 by vvaudain          #+#    #+#             */
/*   Updated: 2024/02/21 11:21:48 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

void	ft_exec(t_data *data, t_cmd *cmd)
{
	int		i;
	char	*joined_path;

	i = 0;
	while (data->splitted_paths[i])
	{
		joined_path = ft_strjoin(data->splitted_paths[i], cmd->cmd);
		if (!joined_path)
		{
			free_all(data);
			ft_error(3);
			exit(EXIT_FAILURE);
		}
		if (execve(data->splitted_paths[i], cmd->args, data->env) == 0)
		{
			free(joined_path);
			break ;
		}
		else
			free(joined_path);
		i++;
	}
}
