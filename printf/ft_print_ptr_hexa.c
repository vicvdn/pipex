/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr_hexa.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:41:44 by vvaudain          #+#    #+#             */
/*   Updated: 2023/11/27 14:07:48 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr_hexa(unsigned long long nb, char *base)
{
	int				return_value;

	return_value = 0;
	if (!nb)
		return (ft_printstr("(nil)"));
	return_value += ft_printstr("0x");
	return_value += ft_printnbr_base(nb, base);
	return (return_value);
}
