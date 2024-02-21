/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:40:48 by vvaudain          #+#    #+#             */
/*   Updated: 2023/11/13 10:40:51 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("%d", ft_isascii(0));
	printf("%d", ft_isascii(0));
	printf("%c", '\n');
	printf("%d", ft_isascii(130));
	printf("%d", isascii(130));
	printf("%c", '\n');
	printf("%d", ft_isascii('#'));
	printf("%d", ft_isascii('#'));
	return (0);
}*/