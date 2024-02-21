/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:40:37 by vvaudain          #+#    #+#             */
/*   Updated: 2023/11/13 11:55:54 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int main(void)
// {
//     printf("%d", ft_isalpha(-1));
//     printf("%d", isalpha(-1));
//     printf("%c", '\n');
//     printf("%d", ft_isalpha('0'));
//     printf("%d", isalpha('0'));
//     printf("%c", '\n');
// }