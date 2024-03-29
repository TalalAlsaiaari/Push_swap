/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 01:36:18 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/20 21:27:04 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_atoi(char *str)
{
	int			s;
	long int	res;

	s = 1;
	res = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			s *= -1;
		str++;
		break ;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = (*str - '0') + (res * 10);
		str++;
	}
	return (res * s);
}
