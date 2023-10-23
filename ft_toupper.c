/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:51:47 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/10/17 14:11:24 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

#include <stdio.h>
int main(void)
{
	int	letra;
	letra = 'a';
	printf("%c", ft_toupper(letra));
	return (0);
}
