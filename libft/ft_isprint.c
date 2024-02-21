/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:41:27 by vvaudain          #+#    #+#             */
/*   Updated: 2023/11/13 10:41:30 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("%d", ft_isprint(30));
    printf("%d", isprint(30));
    printf("%c", '\n');
    printf("%d", ft_isprint(49));
    printf("%d", isprint(49));
    printf("%c", '\n');
    printf("%d", ft_isprint('a'));
    printf("%d", isprint('a'));
	printf("%c", '\n');
    printf("%d", ft_isprint(129));
    printf("%d", isprint(129));
	printf("%c", '\n');
    printf("%d", ft_isprint(127));
    printf("%d", isprint(127));
    return (0);
}*/