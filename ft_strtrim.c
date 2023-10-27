/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:58:30 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/10/27 16:42:45 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		j;
	char	*p;
	char	*pos;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	j = ft_strlen(s1);
	while (*s1 && (ft_strchr(set, s1[j])))
		j--;
	j++;
	p = (char *) malloc((j + 2) * sizeof(char));
	if (!p)
		return (NULL);
	pos = p;
	while (j--)
	{
		*p++ = *s1++;
	}
	*p = '\0';
	return (pos);
}
