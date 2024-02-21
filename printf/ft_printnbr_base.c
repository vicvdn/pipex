/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:42:41 by vvaudain          #+#    #+#             */
/*   Updated: 2023/12/18 16:30:24 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (base[i] == '\0' || ft_strlen_printf(base) == 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_printnbr_base(unsigned long long nbr, char *base)
{
	int					n;
	int					return_value;
	unsigned long long	uulong_nbr;

	n = ft_strlen_printf(base);
	return_value = 0;
	uulong_nbr = (unsigned long long)nbr;
	if (ft_check_base(base) == 0)
		return (0);
	if (nbr < 0)
	{
		return_value += ft_printchar('-');
		return_value += ft_printnbr_base(-(uulong_nbr / n), base);
		return_value += ft_printnbr_base(-(uulong_nbr % n), base);
	}
	else if (nbr >= (unsigned int) n)
	{
		return_value += ft_printnbr_base(uulong_nbr / n, base);
		return_value += ft_printnbr_base(uulong_nbr % n, base);
	}
	else
		return_value += ft_printchar(base[uulong_nbr]);
	return (return_value);
}
