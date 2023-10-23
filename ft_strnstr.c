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

#include <stddef.h>
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

#include <stdio.h>
int	main(void)
{
	int	n;
	char 	*c;
	n = 22;
	char *big = "F_BD_CE_BD_EF_BF_BF_EF_BF_BD_EF__DD_EF_BF_BD";
	char *little = "_EF_BF_BE_E";
	c = ft_strnstr(big, little, n);
	printf("%s", (c));
	return (0);
}
