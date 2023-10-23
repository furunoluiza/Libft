/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:29:10 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/10/18 19:34:32 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n > 0)
	{
		if (*(unsigned char*)(s1) != *(unsigned char*)(s2))
			return (*(unsigned char*)(s1) - *(unsigned char*)(s2));
		s1++;
		s2++;
		n--;
	}
	return (0);
}
