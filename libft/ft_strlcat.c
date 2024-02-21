/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:42:12 by vvaudain          #+#    #+#             */
/*   Updated: 2023/11/13 13:38:12 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (dst == 0 && size == 0)
		return (0);
	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	while (dst[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && (i + j) < size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

//si size inf a la longueur de dest return size + taille src
// #include <stdio.h>
// #include <bsd/string.h>
// int	main(void)
// {
// 	char	dest[30];
// 	char 	src[9] = "AAAAAAAAA";
// 	dest = memset(dest, 0, 30);
// 	printf("ft: %d == 10", (int) ft_strlcat(dest, src, 1));
// 	printf("%c", '\n');
// 	printf("vrai: %d == 10", (int) strlcat(dest, src, 1));
// 	printf("%c", '\n');
// 	// char	dest[6] = "abc";
// 	// char	dest1[6] = "abc";
// 	// char	src [2] = "d";
// 	// ft_strlcat(dest, src, 3);
// 	// strlcat(dest1, src, 3);
// 	// printf("%s", dest);
// 	// printf("%c", '\n');
// 	// printf("%s", dest1);
// 	return (0);
// }