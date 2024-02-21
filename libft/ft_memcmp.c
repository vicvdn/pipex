/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:31:17 by vvaudain          #+#    #+#             */
/*   Updated: 2023/11/09 10:20:54 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*one;
	unsigned char	*two;

	i = 0;
	if (n == 0)
		return (0);
	one = (unsigned char *) s1;
	two = (unsigned char *) s2;
	while (one[i] == two[i] && i < n - 1)
		i++;
	return ((int)(one)[i] - (int)(two)[i]);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	s[] = {-128, 0, 127, 0};
// 	// char	sCpy[] = {-128, 0, 127, 0};
// 	char	s2[] = {0, 0, 127, 0};
// 	char	s3[] = {0, 0, 42, 0};

// 	// printf("ft : %d", ft_memcmp(s, sCpy, 4));
// 	// printf("%c", '\n');
// 	// printf("vrai : %d", memcmp(s, sCpy, 4));
// 	// printf("%c", '\n');
// 	printf("ft : %d", ft_memcmp(s, s2, 0));
// 	printf("%c", '\n');
// 	printf("vrai : %d", memcmp(s, s2, 0));
// 	printf("%c", '\n');
// 	// printf("ft : %d > 0", ft_memcmp(s, s2, 1));
// 	// printf("%c", '\n');
// 	// printf("vrai : %d > 0", memcmp(s, s2, 1));
// 	// printf("%c", '\n');
// 	// printf("ft : %d < 0", ft_memcmp(s, s2, 1));
// 	// printf("%c", '\n');
// 	// printf("vrai : %d < 0", memcmp(s, s2, 1));
// 	// printf("%c", '\n');
// 	printf("ft : %d != 0", ft_memcmp(s2, s3, 4));
// 	printf("%c", '\n');
// 	printf("vrai : %d != 0", memcmp(s2, s3, 4));
// 	/*!ft_memcmp(s, sCpy, 4)); showLeaks();
// 	check(!ft_memcmp(s, s2, 0)); showLeaks();
// 	check(ft_memcmp(s, s2, 1) > 0); showLeaks();
// 	check(ft_memcmp(s2, s, 1) < 0); showLeaks();
// 	check(ft_memcmp(s2, s3, 4) != 0); showLeaks();*/
// 	/*char	s1[8] = "abcde";
// 	char	s2[8] = "abcee";

// 	printf("%d", ft_memcmp(s1, s2, 4));
// 	printf("%c", '\n');
// 	printf("%d", memcmp(s1, s2, 4));
// 	return (0);*/
// }