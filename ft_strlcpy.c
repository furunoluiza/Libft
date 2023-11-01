/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <luizafuruno@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:10:25 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/11/01 16:11:46 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_length;

	i = 0;
	src_length = 0;
	while (src[src_length] != '\0')
	{
		src_length++;
	}
	if (size > 0)
	{
		while (src[i] != '\0' && (size - 1 > 0))
		{
			dst[i] = src[i];
			i++;
			size--;
		}
		dst[i] = '\0';
	}
	return (src_length);
}
