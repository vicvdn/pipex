/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:54:21 by vvaudain          #+#    #+#             */
/*   Updated: 2023/11/13 10:29:46 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0' || little == NULL)
		return ((char *) big + i);
	while (i < len && big[i])
	{
		j = 0;
		if (big[i] == little[j])
		{
			j = 0;
			while (big[i + j] == little[j] && little[j]
				&& big[i + j] && (i + j < len))
			{
				if (little[j + 1] == '\0')
					return ((char *) big + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

/*#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	const char	big[30] = "ceci est un test";
	const char	little[10] = "ci";
	char		*ptr;
	char		*ptr1;

	ptr = ft_strnstr(big, little, 16);
	ptr1 = strnstr(big, little, 16);
	printf("%s", ptr);
	printf("%c", '\n');
	printf("%s", ptr1);
	printf("%c", '\n');
	ptr = ft_strnstr(big, little, 8);
	ptr1 = strnstr(big, little, 8);
	printf("%s", ptr);
	printf("%c", '\n');
	printf("%s", ptr1);
	return (0);
}*/