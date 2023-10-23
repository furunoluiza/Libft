/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:48:20 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/10/17 15:23:58 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
{
	const char *a;
	a = s;
	while (*a)
		a++;
	while (*s++)
	{
		if (*a == c)
			return((char*)(a));
		a--;
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	char *c = "luiuza";
	int	a;

	a = 'u';
	printf("%s", ft_strrchr(c, a));
}
