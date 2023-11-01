/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <luizafuruno@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:14:29 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/11/01 16:01:50 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*str;

	i = 0;
	str = ((unsigned char *) s);
	while (n > 0)
	{
		str[i] = ((unsigned char) c);
		n--;
		i++;
	}
	return ((unsigned char *) s);
}
