/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:41:49 by vvaudain          #+#    #+#             */
/*   Updated: 2023/11/13 13:28:32 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *) s;
	while (*ptr)
	{
		if (*ptr == (char) c)
			return (ptr);
		ptr++;
	}
	if (c == '\0')
		return (ptr);
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	s[8] = "testons";
// 	printf("ft: %s == 0", ft_strchr(s, 'u'));
// 	printf("%c", '\n');
// 	printf("vrai: %s == 0", strchr(s, 'u'));
// 	printf("%c", '\n');
// 	printf("ft: %s == %s", ft_strchr(s, 't' + 256), s);
// 	printf("%c", '\n');
// 	printf("vrai: %s == %s", strchr(s, 't' + 256), s);
// 	/*char	s[10] = "test";

// 	printf("%s", ft_strchr(s, 115));
// 	printf("%c", '\n');
// 	printf("%s", strchr(s, 115));*/
// 	return (0);
// }