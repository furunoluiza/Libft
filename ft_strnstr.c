/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:36:03 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/10/20 13:15:40 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j  = 0;
	if (little[j] == '\0')
		return ((char*)(big));
	while (big[i] != '\0' && len > 0)
	{
		while (big[i] == little[j] && len > 0)
		{
			i++;
			j++;
			len--;
		}
		 if (little[j] == '\0')
                                return ((char*)(&big[i-j]));
		i++;
		len--;
		j = 0;
	}
	return (NULL);
}
