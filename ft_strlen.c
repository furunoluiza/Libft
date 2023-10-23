/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:16:30 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/10/17 13:43:46 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
size_t	ft_strlen(char *s)
{
	size_t len;
	
	len = 0;
	while(*s++)
		len++;
	return (len);
}
/*#include <stdio.h>
int	main(void)
{
	char *str = "luiza";
	printf("%ld", ft_strlen(str));
	return (0);
}*/
