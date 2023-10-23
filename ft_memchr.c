/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:27:13 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/10/18 18:25:11 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
void *ft_memchr(const void *s, int c, size_t n)
{
	while (n > 0)
	{
		if (*(unsigned char*)(s) == ((unsigned char)(c)))
			return ((void*)(s));
		s++;
		n--;
	}
	return (NULL);
}

#include <stdio.h>
int	main(void)
{
	char	c;
	int	n;
	char *ptr = "luiza";
	c = 'i';
	n = 4;
	char *ret = ft_memchr(ptr, c, n);
	printf("%s", ret);	
}
