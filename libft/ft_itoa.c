/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:46:40 by vvaudain          #+#    #+#             */
/*   Updated: 2023/11/15 11:46:44 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(int n)
{
	int	i;
	int	abs;

	i = 0;
	abs = n;
	if (n < 0)
		abs = abs * (-1);
	if (n == 0)
		return (1);
	while (abs != 0)
	{
		abs = abs / 10;
		i++;
	}
	if (n < 0)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	long		j;
	long		abs;
	char		*str;

	j = ft_size(n);
	abs = n;
	if (n < 0)
		abs = abs * (-1);
	str = (char *) malloc((j + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[j] = '\0';
	if (n == 0)
		str[0] = '0';
	else
	{
		while (j-- > 0 && abs != 0)
		{
			str[j] = abs % 10 + '0';
			abs = abs / 10;
		}
		if (n < 0)
			str[j] = '-';
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	int	i = -123;
	int j = 123;
	int k = 2147483647;
	int l = -2147483648;
	int	m = 0;

	printf("%s", ft_itoa(i));
	printf("%c", '\n');
	printf("%s", ft_itoa(j));
	printf("%c", '\n');
	printf("%s", ft_itoa(k));
	printf("%c", '\n');
	printf("%s", ft_itoa(l));
	printf("%c", '\n');
	printf("%s", ft_itoa(m));
	return (0);
}*/