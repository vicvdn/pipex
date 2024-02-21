/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:27:08 by vvaudain          #+#    #+#             */
/*   Updated: 2023/11/13 13:30:08 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < n - 1 && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("ft: %d == 0", ft_strncmp("t", "", 0));
// 	printf("%c", '\n');
// 	printf("vrai: %d == 0", strncmp("t", "", 0));
// 	printf("%c", '\n');
// 	printf("ft: %d == 0", ft_strncmp("", "1", 0));
// 	printf("%c", '\n');
// 	printf("vrai: %d == 0", strncmp("", "1", 0));
// 	printf("%c", '\n');
// 	printf("ft: %d == 0", ft_strncmp("1", "", 0));
// 	printf("%c", '\n');
// 	printf("vrai: %d == 0", strncmp("1", "", 0));
// 	printf("%c", '\n');
// 	// char	s1[8] = "abcde";
// 	// char	s2[8] = "abcee";

// 	// printf("%d", ft_strncmp(s1, s2, 6));
// 	// printf("%c", '\n');
// 	// printf("%d", strncmp(s1, s2, 6));
// 	// return (0);
// }