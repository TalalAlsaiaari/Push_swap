/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:40:58 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/10 21:29:37 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	find_index(t_list *a, int *c, int *ac)
{
	int	index;

	index = 0;
	while (index < a->size)
	{
		if (a->top[index] <= c[(*ac - 1) / 2])
			return (index);
		index++;
	}
	return (-1);
}

int	*sort_hundred(t_list *a, t_list *b, int *c, int *ac)
{
	int	i;
	int	index;
	int	temp;

	i = 0;
	temp = *ac;
	// while (*ac)
	// {
		while (i < *ac)
		{
			printf("ac: %d\n", *ac);
			printf("top: %d\n", a->top[0]);
			if (a->top[0] <= c[(*ac - 1) / 2])
			{
				push_b(b, a);
			}
			else if (a->top[0] > c[(*ac - 1) / 2])
			{
				index = find_index(a, c, ac);
				while (a->top[0] >= c[(*ac - 1) / 2])
				{
					reverse_rotate_a(a);
				}
				// push_b(b, a);
			}
			i++;
		}
		// i = 0;
		// *ac /= 2;
	// }
	printf("temp: %d\n", temp);
	i = 0;
	while (i < temp)
		printf("c: %d\n", c[i++]);
	i = 0;
	while (i < temp)
		printf("a hunned: %d\n", a->top[i++]);
	i = 0;
	while (i < temp)
		printf("b hunned: %d\n", b->top[i++]);
	return (0);
}