/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:29:05 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/19 16:38:21 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	not_digit(char *temp, int y)
{
	if (ft_isdigit(temp[y]) == 0 && temp[y] != '-' && temp[y] != '+')
	{
		ft_putstr_fd("Error\n", 2);
		free (temp);
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
			not_digit(temp, y);
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
			free (a);
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
	free (one_d);
	a = (int *)malloc((sizeof(int) * ac));
	if (a == 0)
		exit (1);
	while (two_d[j])
	{
		a[i] = special_atoi(two_d[j], a, two_d);
		i++;
		j++;
	}
	j = 0;
	while (two_d[j])
	{
		free (two_d[j]);
		j++;
	}
	free (two_d);
	duplicate_checker(a, ac);
	return (a);
}
			
int	main(int ac, char **av)
{	
	char	*temp;
	t_list	a;
	t_list	b;
	int		*c;
	int		i;


	i = 0;
	temp = ft_strsep(ac - 1, av + 1, " ");
	if ((temp[i] == '-' || temp[i] == '+') && (temp[i + 1] == '-' || temp[i + 1] == '+' || temp[i + 1] == '\0'))
	{
		ft_putstr_fd("Error\n", 2);
		free (temp);
		return (1);
	} 
	ac = args_counter(temp);
	if (ac < 2)
	{
		if (ac == 0)
			ft_putstr_fd("Error\n", 2);
		free (temp);
		return (1);
	}
	a.top = a_list(ac, temp);
	// free (temp);
	b.top = (int *)malloc(sizeof(int) * ac);
	a.size = ac;
	b.size = 0;
	c = compare_stack(&a, ac);
	if (ac == 3)
		sort_three(&a);
	if (ac == 4)
		sort_four(&a, &b);
	if (ac == 5)
		sort_five(&a, &b);
	if (ac > 5)
		sort_hundred(&a, &b, c, &ac);
	free (c);
	free (b.top);
	free (a.top);
	return (0);
}