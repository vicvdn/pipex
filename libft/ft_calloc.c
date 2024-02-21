/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:46:55 by vvaudain          #+#    #+#             */
/*   Updated: 2023/11/15 11:46:59 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pointeur;

	if (((long)count < 0 && (long)size < 0)
		|| ((long)count != 0 && (long)size < 0)
		|| ((long)count < 0 && (long)size != 0)
		|| ((long)count > 4294967295 || (long)size > 4294967295))
		return (NULL);
	pointeur = (void *) malloc(count * size);
	if (!pointeur)
		return (NULL);
	ft_bzero(pointeur, count * size);
	return (pointeur);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	int size = 8539;

// 	void * d1 = ft_calloc(size, sizeof(int));
// 	void * d2 = calloc(size, sizeof(int));
// 	if (memcmp(d1, d2, size * sizeof(int)))
// 		printf("%s", "erreur");
// 	free(d1);
// 	free(d2);
// 	return (0);
// }