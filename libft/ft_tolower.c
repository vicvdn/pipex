/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:42:54 by vvaudain          #+#    #+#             */
/*   Updated: 2023/11/13 11:58:03 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	printf("%c", ft_tolower(72));
	printf("%c", '\n');
	printf("%c", tolower(72));
	return (0);
}*/