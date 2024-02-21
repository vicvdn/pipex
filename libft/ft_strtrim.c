/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:32:52 by vvaudain          #+#    #+#             */
/*   Updated: 2023/11/13 14:37:48 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isinset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;

	if (s1 == 0 || set == 0)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_isinset(s1[start], set) == 1)
		start++;
	while (ft_isinset(s1[end], set) == 1)
		end--;
	trimmed = ft_substr(s1, (unsigned int) start, end - start + 1);
	return (trimmed);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*test = "   aaaaaVictoireaa  ";
// 	char	*set = " a";

// 	printf("%s", ft_strtrim(test, set));
// 	return (0);
// }