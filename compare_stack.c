/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:20:16 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/10 20:44:37 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	*compare_stack(t_list *a, int ac)
{
	int	*c;
	int	i;
	int	j;

	c = (int *)malloc(sizeof(int) * ac);
	if (c == 0)
		return (0);
	i = -1;
	while (++i < ac)
		c[i] = a->top[i];
	i = 0;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (c[i] > c[j])
				ft_swap(&c[i], &c[j]);
			j++;
		}
		i++;
	}
	return (c);
}
