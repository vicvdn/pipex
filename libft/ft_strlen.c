/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:39:30 by vvaudain          #+#    #+#             */
/*   Updated: 2023/11/13 10:42:36 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	if (s[length] == '\0')
		return (length);
	while (s[length] != '\0')
		length++;
	return (length);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%zu", ft_strlen("Hello test"));
	printf("%c", '\n');
	printf("%lu", strlen("Hello test"));
	return (0);
}*/