/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:40:27 by vvaudain          #+#    #+#             */
/*   Updated: 2023/11/13 10:40:30 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%d", ft_isalnum('z'));
	printf("%d", isalnum('z'));
	printf("%c", '\n');
	printf("%d", ft_isalnum('0'));
	printf("%d", isalnum('0'));
	printf("%c", '\n');
	printf("%d", ft_isalnum('+'));
	printf("%d", isalnum('+'));
}*/