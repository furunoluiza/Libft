/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:48:19 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/10/17 13:08:25 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return (c >= 65 && c <= 90 || c >= 97 && c <= 122);
}
/*#include <stdio.h>
int	main(void)
{
	int	a;
	a = 'd';
	printf("%d", ft_isalpha (a));
	return (0);
}*/