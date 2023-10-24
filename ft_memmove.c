/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:42:38 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/10/24 18:47:31 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	dest_ptr = ((unsigned char *) dest);
	src_ptr = ((unsigned char *) src);
	if (*src_ptr >= *dest_ptr)
	{
		while (n > 0)
		{
			*dest_ptr++ = *src_ptr++;
			n--;
		}
	}
	else if (*src_ptr < *dest_ptr)
	{
		while (n > 0)
		{	
			dest_ptr[n - 1] = src_ptr[n - 1];
			n--;
		}
	}
	return (dest);
}
