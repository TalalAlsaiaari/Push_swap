/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   special_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 23:29:11 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/08 00:53:35 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	number_check(long int res, int s, int c)
{
	if ((c != '\0' && c == '+') || (c != '\0' && c == '-'))
	{
		ft_putstr_fd("Error\n", 2);
		exit (1);
	}
	else if (res == 0 && s != 0)
	{
		ft_putstr_fd("Error\n", 2);
		exit (1);
	}
	else if ((res * s) > 2147483647 || (res * s) < -2147483648)
	{
		ft_putstr_fd("Error\n", 2);
		exit (1);
	}
}

void	extra_sign(char c)
{
	if (c == '-' || c == '+')
	{
		ft_putstr_fd("Error\n", 2);
		exit (1);
	}
}

int	zero_check(char c, int s)
{
	if (c == '0')
		s = 0;
	return (s);
}

long int	special_atoi(char *str)
{
	int			x;
	int			s;
	long int	res;

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
	s = zero_check(str[x], s);
	while (str[x] >= '0' && str[x] <= '9')
	{
		res = (str[x] - '0') + (res * 10);
		x++;
	}
	number_check(res, s, str[x]);
	return (res * s);
}
