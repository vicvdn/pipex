/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:47:19 by victoirevau       #+#    #+#             */
/*   Updated: 2024/02/19 18:00:58 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

void	ft_parsing(int ac, char **av, t_data *data)
{
	if (ac != 5)
	{
		ft_error(1);
		exit (EXIT_FAILURE);
	}
	if (ft_strncmp(av[1], "here_doc", 8) == 0 && ac == 6)
	{
		data->is_here_doc = 1;
		ft_error(2);
		exit (EXIT_FAILURE);
	}
	data->is_here_doc = 0;
}
