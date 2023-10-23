/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:03:03 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/10/21 14:50:16 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_length;

	i = 0;
	j = 0;
	src_length = 0;
	while (dst[i] != '\0' && size > 0)
	{
		i++;
		size--;
	}
	while (src[j] != '\0' && size > 0)
	{
		dst[i] = src[j];
		i++; 
		j++;
		size--;
	}
	dst[i] = '\0';
	while (src[src_length] == '\0')
	{
		src_length++;
	}
	if (src[j] == '\0')
		return (j);
	return (src_length - j);
}
