/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:29:05 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/07 23:05:38 by talsaiaa         ###   ########.fr       */
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
	int		*a;
	int		*b;
	int	x = 0;

	temp = ft_strsep(ac - 1, av + 1, " ");
	ac = args_counter(temp);
	if (ac < 2)
	{
		ft_printf("Error\nInvalid number of arguments");
		return (1);
	}
	a = a_list(ac, temp);
	b = (int *)malloc(sizeof(int) * ac);
	x = 0;
	while (x < ac)
		printf("b: %d\n", b[x++]);
	x = 0;
	while (x < ac)
		printf("a: %d\n", a[x++]);
	swap_a(a, ac);
	x = 0;
	while (x < ac)
		printf("a swapped: %d\n", a[x++]);
	rotate_a(a, ac);
	x = 0;
	while (x < ac)
		printf("a rotated: %d\n", a[x++]);
	reverse_rotate_a(a, ac);
	x = 0;
	while (x < ac)
		printf("a reverse rotated: %d\n", a[x++]);
	b = push_b(b, a, ac);
	x = 0;
	while (x <= ac)
		printf("push b: %d\n", b[x++]);
	// a = push_a(a, b, ac);
	// x = 0;
	// while (x <= ac)
	// 	printf("push a: %d\n", a[x++]);
	return (0);
}