/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:43:37 by vvaudain          #+#    #+#             */
/*   Updated: 2023/11/27 13:37:49 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int i)
{
	int	return_value;

	return_value = 0;
	if (i > 9)
	{
		return_value += ft_print_unsigned(i / 10);
		return_value += ft_print_unsigned(i % 10);
	}
	if (i >= 0 && i <= 9)
		return_value += ft_printchar(i + '0');
	return (return_value);
}
