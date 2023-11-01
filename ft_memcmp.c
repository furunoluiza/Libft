/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <luizafuruno@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:29:10 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/11/01 15:57:48 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n > 0)
	{
		if ((*(unsigned char *) s1) != (*(unsigned char *) s2))
			return ((*(unsigned char *) s1) - (*(unsigned char *) s2));
		s1++;
		s2++;
		n--;
	}
	return (0);
}
