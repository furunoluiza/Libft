/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:14:29 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/10/20 16:03:19 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
void *ft_memset(void *s, int c, size_t n)
{
	int		i;
	unsigned char	*str;

	i = 0;
	str = ((unsigned char*)(s));
	while (n > 0)
	{
		str[i] = ((unsigned char)(c));
		n--;
		i++;
	}
	return ((unsigned char*)(s));
}

#include <stdio.h>
int	main(void)
{
	int	n;
	char	*b;
	
	n = 11;
	char a[11] = "AAAAAAAAAAA";	
	b = ft_memset(a, 'c', 3);
	printf("%s", (b));
}
