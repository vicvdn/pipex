/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:40:14 by vvaudain          #+#    #+#             */
/*   Updated: 2023/11/13 14:35:04 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (dest || src))
	{
		*((char *)dest + i) = *((const char *)src + i);
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[10];
	char	*str;
	char	buffer1[10];
	int		i;

	str = "Hello test";
	ft_memcpy(dest, str, sizeof(char) * 5);
	memcpy(buffer1, str, sizeof(char) * 5);
	i = 0;
	while (i < 5)
	{
		printf("%c", dest[i]);
		i++;
	}
	i = 0;
	printf("%c", '\n');
	while (i < 10)
	{
		printf("%c", buffer1[i]);
		i++;
	}
	return (0);
}*/