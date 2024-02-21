/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:19:17 by vvaudain          #+#    #+#             */
/*   Updated: 2023/11/09 14:05:51 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char) c)
			return ((char *)s + i);
		i--;
	}
	i = ft_strlen(s) + 1;
	if (c == '\0')
		return ((char *)s + i);
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char s[] = "tripouille";
// 	//char s2[] = "ltripouiel";
// 	char s3[] = "";
// 	printf("ft: %s == %s", ft_strrchr(s, 't'), s);
// 	printf("%c", '\n');
// 	printf("vrai: %s == %s", strrchr(s, 't'), s);
// 	printf("%c", '\n');
// 	printf("ft: %s == %s", ft_strrchr(s, 't' + 256), s);
// 	printf("%c", '\n');
// 	printf("vrai: %s == %s", strrchr(s, 't' + 256), s);
// 	printf("%c", '\n');
// 	printf("ft: %s == %s", ft_strrchr(s3, 0), s3);
// 	printf("%c", '\n');
// 	printf("vrai: %s == %s", strrchr(s3, 0), s3);
// 	printf("%c", '\n');

// /*char	s[10] = "test";

// 	/*printf("%s", ft_strrchr(s, 0));
// 	printf("%c", '\n');
// 	printf("%c", 'h');
// 	printf("%s", strrchr(s, 0));*/
// 	return (0);
// }