/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:17:37 by vvaudain          #+#    #+#             */
/*   Updated: 2023/11/13 12:40:40 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) s;
	while (i < n)
	{
		if (str[i] == (unsigned char) c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char s[] = {0, 1, 2 ,3 ,4 ,5};
// 
// 	printf("ft : %s == %s", (char *) ft_memchr(s, 2 + 256, 3), s + 2);
// 	printf("%c", '\n');
// 	printf("vrai : %s == %s", (char *) memchr(s, 2 + 256, 3), s + 2);
// 	// // /* 1 */ ft_memchr(s, 0, 0) == NULL;
// 	// // /* 2 */ ft_memchr(s, 0, 1) == s;
// 	// // /* 3 */ ft_memchr(s, 2, 3) == s + 2;
// 	// // /* 4 */ ft_memchr(s, 6, 6) == NULL;
// 	// // /* 5 */ ft_memchr(s, 2 + 256, 3) == s + 2;
// 	// printf("%s", (char *) ft_memchr(s, 116, 4));
// 	// printf("%c", '\n');
// 	// printf("%s", (char *) memchr(s, 116, 4));*/
// 	return (0);
// }