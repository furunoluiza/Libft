/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:51:15 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/10/23 18:03:05 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = (void*)malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	while (*ptr && nmemb > 0)
	{
		*ptr++ = 0;
		nmemb--;
	}
	return (ptr);
}
