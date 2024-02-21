/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:09:01 by vvaudain          #+#    #+#             */
/*   Updated: 2023/11/27 14:09:05 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

static int	ft_nblen_baseten(int nb)
{
	int	i;
	int	abs;

	i = 0;
	abs = ft_abs(nb);
	while (abs > 0)
	{
		i++;
		abs /= 10;
	}
	if (i == 0)
		return (1);
	return (i);
}

int	ft_printnbr(int n)
{
	long int	abs;
	int			return_value;

	return_value = 0;
	if (n < 0)
		return_value += ft_printchar('-');
	if (n == -2147483648)
	{
		return_value += ft_printstr("2147483648");
		return (return_value);
	}
	abs = (long) ft_abs(n);
	if (abs > 9)
	{
		ft_printnbr(abs / 10);
		ft_printnbr(abs % 10);
	}
	if (abs >= 0 && abs <= 9)
		ft_printchar(abs + '0');
	if (n < 0)
		return (ft_nblen_baseten(n) + 1);
	else
		return (ft_nblen_baseten(n));
}
