/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <luizafuruno@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:48:20 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/11/01 16:14:05 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*a;

	a = ((unsigned char *) s);
	while (*a)
		a++;
	if (c == '\0')
		return ((char *) a);
	a--;
	while (*s)
	{
		if (*a == (unsigned char) c)
			return ((char *) a);
		a--;
		s++;
	}
	return (0);
}
