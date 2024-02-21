/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:31:24 by victoirevau       #+#    #+#             */
/*   Updated: 2024/02/20 17:24:28 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

/* Initializing our data with what we have in the cmd line
which will be used in the next steps of our program*/

void	init_pipex(char **av, char **envp, t_data *data, int ac)
{
	data->env = envp;
	data->ac = ac;
	data->path = NULL;
	data->splitted_paths = NULL;
	data->fds[0] = 0;
	data->fds[1] = 0;
	data->infile = av[1];
	data->outfile = av[4];
	data->cmd_list = NULL;
}

// int	get_nb_cmds(int ac, char **av)
// {
// 	if (ac == 5)
// 		return (2);
// 	// if (ft_strncmp(av[2], "here_doc", 8) == 0 && ac == 6)
// 	// 	return (2);
// 	// else if (ft_strncmp(av[2], "here_doc", 8) != 0 && ac > 5)
// 	// 	return (ac - 3);
// }
