/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:29:05 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/02 00:42:28 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	not_digit(char c)
{
	if (ft_isdigit(c) == 0 && c != '-' && c != '+')
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

void	a_list(int ac, char *one_d)
{
	char	**two_d;
	int		*a;
	int		i;
	int		j;

	i = 0;
	j = 0;
	two_d = ft_split(one_d, ' ');
	a = (int *)malloc((sizeof(int) * ac));
	if (a == 0)
		exit (1);
	while (two_d[j])
	{
		a[i] = special_atoi(two_d[j]);
		i++;
		j++;
	}
}

int	main(int ac, char **av)
{	
	char	*temp;

	temp = ft_strsep(ac - 1, av + 1, " ");
	ac = args_counter(av);
	if (ac < 2)
	{
		ft_printf("Error\n");
		return (1);
	}
	a_list(ac, temp);
	return (0);
}