/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   special_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 23:29:11 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/01 23:47:26 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	extra_sign(char c)
{
	if (c == '-' || c == '+')
	{
		ft_printf("Error\nArgumnet has multiple signs");
		exit (1);
	}
}

int	special_atoi(char *str)
{
	int	x;
	int	s;
	int	res;

	x = 0;
	s = 1;
	res = 0;
	while (str[x] == ' ' || (str[x] >= 9 && str[x] <= 13))
		x++;
	while (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			s *= -1;
		x++;
		if (str[x] == '-' || str[x] == '+')
			extra_sign(str[x]);
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		res = (str[x] - '0') + (res * 10);
		x++;
	}
	return (res * s);
}
