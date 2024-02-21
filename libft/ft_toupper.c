/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:43:03 by vvaudain          #+#    #+#             */
/*   Updated: 2023/11/13 11:58:25 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("%c", ft_toupper(113));
	printf("%c", '\n');
	printf("%c", toupper(113));
	printf("%c", ft_toupper('z' + 1));
	printf("%c", '\n');
	printf("%c", toupper('z' + 1));
	return (0);
}*/