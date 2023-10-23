/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:15:11 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/10/20 16:42:48 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = ((unsigned char*)(s));
	while (*ptr && n > 0)
	{
		*ptr++ = 0;
		n--;
	}
}

#include <stdio.h>
int	main(void)
{
	int	n;
	char	*a;

	n = 4;
	char s[7] = "seilaa";
	ft_bzero(s, n);
	printf("%s", s);
}
