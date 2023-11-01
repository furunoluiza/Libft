/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <luizafuruno@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:53:48 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/11/01 16:13:08 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*p;
	unsigned char	*ptr;

	p = ((unsigned char *)s1);
	ptr = ((unsigned char *) s2);
	while ((*p || *ptr) && n > 0)
	{
		if (*p != *ptr)
			return (*p - *ptr);
		p++;
		ptr++;
		n--;
	}
	return (0);
}
