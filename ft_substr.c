/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:17:51 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/10/26 17:36:29 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*p;

	i = 0;
	p = malloc ((len + 1) * sizeof (char));
	if (!p)
		return (NULL);
	while (len--)
	{
		p[i++] = s[start++];
	}
	p[i] = '\0';
	return (p);
}
