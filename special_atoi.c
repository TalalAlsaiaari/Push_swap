/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   special_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 23:29:11 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/20 19:45:28 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

char	number_check(long res, int s, char *str, int x)
{
	char	i;

	i = 'y';
	if ((str[x] != '\0' && str[x] == '+') || (str[x] != '\0' && str[x] == '-'))
	{
		ft_putstr_fd("Error\n", 2);
		i = 'x';
		return (i);
	}
	else if ((res * s) > 2147483647 || (res * s) < -2147483648)
	{
		ft_putstr_fd("Error\n", 2);
		i = 'x';
		return (i);
	}
	return (i);
}

int	zero_check(char *str, int x, int s)
{
	if ((str[x] == '0' && str[x + 1] == ' ')
		|| (str[x] == '0' && str[x + 1] == '\0'))
		s = 0;
	return (s);
}

void	extra_sign(char *str, int x, char **two_d, int *a)
{
	if (str[x] == '-' || str[x] == '+')
	{
		ft_putstr_fd("Error\n", 2);
		error_free(two_d, a);
	}
}

long int	special_atoi(char *str, int *a, char **two_d)
{
	int		x;
	int		s;
	char	c;
	long	res;

	x = 0;
	s = 1;
	res = 0;
	while (str[x] == ' ' || (str[x] >= 9 && str[x] <= 13))
		x++;
	if (str[x] == '-')
	{
		s *= -1;
		x++;
	}
	extra_sign(str, x, two_d, a);
	while (str[x] >= '0' && str[x] <= '9')
	{
		res = (str[x] - '0') + (res * 10);
		x++;
	}
	c = number_check(res, s, str, x);
	if (c == 'x')
		error_free(two_d, a);
	return (res * s);
}
