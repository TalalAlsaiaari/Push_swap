/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:29:05 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/02 21:19:00 by talsaiaa         ###   ########.fr       */
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

int	args_counter(char *temp)
{
	int	y;
	int counter;

	y = 0;
	counter = 0;
	while (temp[y])
	{
		while (temp[y] == ' ' || temp[y] == '\t')
			y++;
		if (temp[y] != '\0')
			counter++;
		while ((temp[y] && temp[y] != ' ') && (temp[y] && temp[y] != '\t'))
		{
			not_digit(temp[y]);
			y++;
		}
	}
	return (counter);
}

void	duplicate_checker(int *a, int ac)
{
	int	i;
	int	j;
	int	*addr;

	i = 0;
	j = 0;
	while (i < ac)
	{
		addr = ft_intint(a, a[i], ac);
		if (a[i] == a[j] && &a[i] != addr)
		{
			ft_printf("Error\nDuplicate number found\n");
			exit (1);
		}
		i++;
		j++;
	}
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
		printf("a[i]: %d\n", a[i]);
		i++;
		j++;
	}
	duplicate_checker(a, ac);
}
			
int	main(int ac, char **av)
{	
	char	*temp;
	char	*temp2;
	int		i;
	int		j;

	i = 0;
	j = 0;
	temp = ft_strsep(ac - 1, av + 1, " ");
	printf("temp: %s\n", temp);
	while (temp[i])
	ac = args_counter(temp);
	printf("ac: %d\n", ac);
	if (ac < 2)
	{
		ft_printf("Error\nInvalid number of arguments");
		return (1);
	}
	a_list(ac, temp);
	return (0);
}