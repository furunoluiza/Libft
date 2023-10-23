/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:42:38 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/10/21 13:02:21 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;
	unsigned char	*temp;

	dest_ptr = ((unsigned char*)(dest));
	src_ptr = ((unsigned char*)(src));
	while (n > 0)
	{
		*temp = *src_ptr++;
		*dest_ptr++ = *temp++;
		n--;
	}
	return ((unsigned char*)(dest));
}
