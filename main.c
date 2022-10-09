/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:29:05 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/09 20:22:16 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	not_digit(char c)
{
	if (ft_isdigit(c) == 0 && c != '-' && c != '+')
	{
		ft_putstr_fd("Error\n", 2);
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
			ft_putstr_fd("Error\n", 2);
			exit (1);
		}
		i++;
		j++;
	}
}

int	*a_list(int ac, char *one_d)
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
	duplicate_checker(a, ac);
	return (a);
}
			
int	main(int ac, char **av)
{	
	char	*temp;
	t_list		a;
	t_list		b;

	temp = ft_strsep(ac - 1, av + 1, " ");
	ac = args_counter(temp);
	if (ac < 2)
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	a.list = a_list(ac, temp);
	b.list = (int *)malloc(sizeof(int) * ac);
	if (ac == 3)
		sort_three(&a, &ac);
	if (ac == 4)
		sort_four(&a, &b, &ac);
	if (ac == 5)
		sort_five(&a, &b, &ac);
	return (0);
}