/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:41:41 by vvaudain          #+#    #+#             */
/*   Updated: 2023/11/13 10:41:43 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *) b;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	buffer[10];
	char	buffer1[10];
	int		i;

	ft_memset(buffer, 48, sizeof(char) * 10);
	memset(buffer1, 48, sizeof(char) * 10);
	i = 0;
	while (i < 10)
	{
		printf("%c", buffer[i]);
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