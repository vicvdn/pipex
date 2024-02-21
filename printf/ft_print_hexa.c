/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:42:20 by vvaudain          #+#    #+#             */
/*   Updated: 2023/12/18 16:30:56 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr_base_static(unsigned int nbr, char *base)
{
	int					n;
	int					return_value;

	n = ft_strlen_printf(base);
	return_value = 0;
	if (ft_check_base(base) == 0)
		return (0);
	if (nbr < 0)
	{
		return_value += ft_printchar('-');
		return_value += ft_printnbr_base(-(nbr / n), base);
		return_value += ft_printnbr_base(-(nbr % n), base);
	}
	else if (nbr >= (unsigned int) n)
	{
		return_value += ft_printnbr_base(nbr / n, base);
		return_value += ft_printnbr_base(nbr % n, base);
	}
	else
		return_value += ft_printchar(base[nbr]);
	return (return_value);
}

int	ft_print_hexa(int i, const char format)
{
	if (format >= 65 && format <= 90)
		return (ft_printnbr_base_static(i, "0123456789ABCDEF"));
	if (format >= 97 && format <= 122)
		return (ft_printnbr_base_static(i, "0123456789abcdef"));
	return (0);
}
