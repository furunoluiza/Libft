/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <luizafuruno@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:16:36 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/11/01 16:06:52 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*a;

	a = ((const char *) s);
	while (*a)
		a++;
	if (c == '\0')
		return ((char *) a);
	while (*s)
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}
	return (0);
}
