/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:42:07 by vvaudain          #+#    #+#             */
/*   Updated: 2023/11/27 16:09:11 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list args, const char format)
{
	int	return_value;

	return_value = 0;
	if (format == 'c')
		return_value += ft_printchar(va_arg(args, int));
	else if (format == 's')
		return_value += ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		return_value += ft_print_ptr_hexa(va_arg(args, long long),
				"0123456789abcdef");
	else if (format == 'd' || format == 'i')
		return_value += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		return_value += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		return_value += ft_print_hexa(va_arg(args, unsigned int), format);
	else if (format == '%')
		return_value += ft_printchar('%');
	else
		return (0);
	return (return_value);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		return_value;

	return_value = 0;
	i = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			return_value += ft_format(args, format[i + 1]);
			i++;
		}
		else
			return_value += ft_printchar(format[i]);
		i++;
	}
	va_end(args);
	return (return_value);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	a;

// 	a = ft_printf("%u\n", -1);
// 	printf("%d\n", a);
// 	a = printf("%u\n", -1);
// 	printf("%d\n", a);
// 	// TEST(2, print(" %u ", -1));
// 	return (0);
// }
