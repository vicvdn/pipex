/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:41:10 by vvaudain          #+#    #+#             */
/*   Updated: 2023/11/13 10:41:13 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("%d", ft_isdigit(48));
    printf("%d", isdigit(48));
    printf("%c", '\n');
    printf("%d", ft_isdigit(49));
    printf("%d", isdigit(49));
    printf("%c", '\n');
    printf("%d", ft_isdigit('a'));
    printf("%d", isdigit('a'));
    return (0);
}*/