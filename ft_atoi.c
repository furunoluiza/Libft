/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:22:04 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/10/20 14:11:38 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == 32 || nptr[i] >= 9 && nptr[i] <= 13)
		i++;
	if (nptr[i] == '-')
		sign *= -1;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10;
		result += nptr[i] - 48;
		i++;
	}
	return (result * sign);
}

#include <stdio.h>
int	main(void)
{
	int	test = ft_atoi(" --1234ab567");
	printf("%d", test);
	return (0);
}