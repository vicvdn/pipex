/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:42:20 by vvaudain          #+#    #+#             */
/*   Updated: 2023/11/13 10:42:31 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	char	*source;

	i = 0;
	source = (char *) src;
	if (size == 0)
		return (ft_strlen(src));
	while ((source[i]) && (i < size - 1))
	{
		dst[i] = source[i];
		i++;
	}
	if (i < size)
		dst[i] = '\0';
	return (ft_strlen(src));
}

// // #include <stdio.h>
// // #include <bsd/string.h>
// // int	main(void)
// // {
// // 	char src[] = "coucou";
// // 	char dest[10]; memset(dest, 'A', 10);
// // 	printf("ft: %d == %d && %c == %c", (int)ft_strlcpy(dest, src, 0),
// 			(int)strlen(src), dest[0], 'A');
// // 	// /*char	dest[10];
// // 	return (0);
// // }