/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:53:48 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/10/18 17:26:16 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 || *s2) && n > 0)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

#include <stdio.h>
int   main(void)
{
        unsigned int    n;
        int     c;
        char s1[] = "lliza";
        char s2[] = "luiza";
        n = 2;
        c = ft_strncmp(s1, s2, n);
        printf("%d", c);
}
