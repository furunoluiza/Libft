/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:34:58 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/10/20 18:34:34 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memcpy(void *dest, const void *src, size_t n)
{	
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	dest_ptr = ((unsigned char*)(dest));
	src_ptr = ((unsigned char*)(src));
	while (n > 0)
	{
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr++;
		n--;
	}
	return ((unsigned char*)(dest));
}
