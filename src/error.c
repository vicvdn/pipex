/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:12:25 by vvaudain          #+#    #+#             */
/*   Updated: 2024/02/21 12:00:26 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

void	ft_error(int nb)
{
	if (nb == 1)
		ft_printf("Wrong amount of arguments.\n");
	if (nb == 2)
		ft_printf("You cannot use heredoc in the mandatory part.\n");
	if (nb == 3)
		ft_printf("Error in allocation.\n");
	if (nb == 4)
		perror("Error in permissions\n");
	if (nb == 5)
		perror("Error accessing the file\n");
	if (nb == 6)
		ft_printf("Oops, one ore more of your files is a directory!\n");
}

void	ft_exit(t_data *data, char *file, int nb_error)
{
	if (nb_error == 1)
		perror(file);
	else
		ft_error(6);
	free_all(data);
	exit(EXIT_FAILURE);
}
