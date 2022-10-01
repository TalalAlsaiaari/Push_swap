/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:29:05 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/01 23:02:49 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	not_digit(char c)
{
	if (ft_isdigit(c) == 0)
	{
		ft_printf("Error\n");
		exit (1);
	}
}

int	args_counter(char **av)
{
	int	y;
	int	x;
	int counter;

	y = 1;
	counter = 0;
	while (av[y])
	{
		x = 0;
		while (av[y][x])
		{
			while (av[y][x] == ' ')
				x++;
			if (av[y][x] != '\0')
				counter++;
			while (av[y][x] && av[y][x] != ' ')
			{
				not_digit(av[y][x]);
				x++;
			}
		}
		y++;
	}
	return (counter);
}

int	main(int ac, char **av)
{	
	ac = args_counter(av);
	if (ac < 2)
	{
		ft_printf("Error\n");
		return (1);
	}
	return (0);
}