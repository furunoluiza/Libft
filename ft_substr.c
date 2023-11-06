/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <luizafuruno@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:17:51 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/11/06 14:30:17 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*p;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= len)
		return (ft_strdup(""));
	p = (char *)malloc ((len + 1) * sizeof (char));
	if (!p)
		return (NULL);
	while (len--)
	{
		p[i++] = s[start++];
	}
	p[i] = '\0';
	return (p);
}
