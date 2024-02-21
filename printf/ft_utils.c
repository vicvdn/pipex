/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:43:02 by vvaudain          #+#    #+#             */
/*   Updated: 2023/12/18 16:26:07 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen_printf(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *) s;
	while (*ptr)
	{
		if (*ptr == (char) c)
			return (ptr);
		ptr++;
	}
	if (c == '\0' || !s)
		return (ptr);
	return (NULL);
}

int	ft_nblen_ptr(unsigned long address)
{
	int	i;

	i = 0;
	while (address != 0)
	{
		i++;
		address /= 16;
	}
	return (i);
}

int	ft_nblen(int nb)
{
	int	i;

	if (nb == 0)
		return (1);
	i = 0;
	while (nb > 0)
	{
		i++;
		nb /= 16;
	}
	return (i);
}
