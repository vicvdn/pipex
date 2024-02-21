/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:42:16 by vvaudain          #+#    #+#             */
/*   Updated: 2023/11/15 11:42:18 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	abs;

	if (n < 0)
		ft_putchar_fd('-', fd);
	if (n == -2147483648)
		ft_putstr_fd("2147483648", fd);
	abs = (long) ft_abs(n);
	if (abs > 9)
	{
		ft_putnbr_fd(abs / 10, fd);
		ft_putnbr_fd(abs % 10, fd);
	}
	if (abs >= 0 && abs <= 9)
		ft_putchar_fd(abs + '0', fd);
}
