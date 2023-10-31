/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:37:35 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/10/31 18:01:24 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_w(char const *s, char c)
{
	size_t	words;

	if (!*s)
		return (0);
	words = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			words++;
		while (*s != c && *s)
			s++;
	}
	return (words);
}

static char	**count_letters(char const *s, char c, char **arr)
{
	size_t	letters;
	int		i;

	i = 0;
	if (!*s)
		return (0);
	letters = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		while (*s != c && *s)
		{
			letters++;
			s++;
		}
		arr[i] = ft_substr(s - letters, 0, letters);
		i++;
		letters = 0;
	}
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	words;

	words = count_w(s, c);
	arr = malloc (sizeof(char *) * (words + 1));
	if (!arr)
		return (NULL);
	if (!count_letters(s, c, arr))
		return (NULL);
	arr[words] = 0;
	return (arr);
}
