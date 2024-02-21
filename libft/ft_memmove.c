/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:15:42 by vvaudain          #+#    #+#             */
/*   Updated: 2023/11/13 14:57:24 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	j;

	j = 0;
	if (dest > src && (dest || src))
	{
		while (n > 0)
		{
			*((unsigned char *) dest + n - 1)
				= *((unsigned char *) src + n - 1);
			n--;
		}
	}
	if (dest < src && (dest || src))
	{
		while (j < n)
		{
			*((unsigned char *) dest + j) = *((unsigned char *) src + j);
			j++;
		}
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char *src = "thanks to @apellicc for this test !\r\n";
// 	char dst1[0xF0];
// 	int size = strlen(src);
// 	char *r1 = memmove(dst1, src, size);
// 	char *r2 = ft_memmove(dst1, src, size);

// 	r1 = memmove("", "" - 1, 0);
// 	r2 = ft_memmove("", "" - 1, 0);

// 	if (r1 != r2)
// 		printf("%s", "marche pas");
// 	if (r1 == r2)
// 		printf("%s", "marche");
// 	/*char	dest[10];
// 	char	*str;
// 	char	dest1[10];
// 	int		i;

// 	str = "Hello test";
// 	ft_memmove(dest, str, sizeof(char) * 10);
// 	memmove(dest1, str, sizeof(char) * 10);
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%c", dest[i]);
// 		i++;
// 	}
// 	i = 0;
// 	printf("%c", '\n');
// 	while (i < 5)
// 	{
// 		printf("%c", dest1[i]);
// 		i++;
// 	}*/
// 	return (0);
// }