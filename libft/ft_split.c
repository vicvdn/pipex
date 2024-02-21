/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:44:55 by vvaudain          #+#    #+#             */
/*   Updated: 2023/11/17 11:11:41 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static char	*ft_copy(const char *s, int start, char c)
{
	int		end;
	char	*word;

	end = start;
	while (s[end] != c && s[end] != '\0')
		end++;
	word = ft_substr(s, start, (end - start));
	return (word);
}

static void	ft_free(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free (tab[i]);
		i++;
	}
	free (tab);
}

static char	*ft_string_split(char const *s, int position, char c)
{
	size_t		i;
	int			j;
	int			k;

	i = -1;
	k = -1;
	j = -1;
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && j < 0)
		{
			k++;
			if (k == position)
				return (ft_copy(s, i, c));
			j = 0;
		}
		else if (s[i] == c)
			j = -1;
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		count;
	int		position;

	if (!s)
		return (NULL);
	count = ft_countwords(s, c);
	tab = (char **) malloc((count + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	position = 0;
	while (position < count)
	{
		tab[position] = ft_string_split(s, position, c);
		if (!tab[position])
		{
			ft_free(tab);
			return (NULL);
		}
		position++;
	}
	tab[position] = 0;
	return (tab);
}

// #include <string.h>

// int	main(void)
// {
// 	char 	*s = "tripouille";
// 	char 	**tab;
// 	char	c = '\0';
// 	int		i = 0;
// 	// int		j = 0;

// 	tab = ft_split(s, c);
// 	while (tab[i])
// 	{
// 		// while (tab[i][j])
// 		// {
// 		// 	// if (tab[i][j] == ' ')
// 		// 	// 	write(1, "[space]", 7);
// 		// 	// else
// 		// 	// 	write(1, &tab[i][j], 1);
// 		// 	// j++;
// 		// }
// 		printf("%d : %s\n", i, tab[i]);	
// 		i++;
// 	}
// 	return (0);
// }