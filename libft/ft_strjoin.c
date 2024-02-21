/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:42:03 by vvaudain          #+#    #+#             */
/*   Updated: 2023/11/13 14:37:00 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strcat;
	size_t	i;

	if (s1 == 0 || s2 == 0)
		return (NULL);
	strcat = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1)
			* sizeof(char));
	if (!strcat)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		strcat[i] = s1[i];
		i++;
	}
	strcat[i] = '\0';
	ft_strlcat(strcat, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (strcat);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*test;
// 	test = "Victoire42";
// 	printf("%s == %s", test, ft_strjoin("Victoire", "42"));
// 	return (0);
// }