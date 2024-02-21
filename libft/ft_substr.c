/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:42:46 by vvaudain          #+#    #+#             */
/*   Updated: 2023/11/15 16:58:24 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (len > size - start)
		len = size - start;
	if (start > ft_strlen(s))
	{
		len = 0;
		start = 0;
	}
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[start + i] != '\0' && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	char *test = ft_substr(argv[1], atoi(argv[2]), atoi(argv[3]));
// 	printf("%s\n", test);
// 	free(test);
// 	return (0);
// }