/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:51:16 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/08 21:22:37 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	*sort_three(t_list *a, int ac)
{
	if (a->list[0] < a->list[1] && a->list[1] < a->list[2] && a->list[2] > a->list[0])
		return (a->list);
	else if (a->list[0] < a->list[1] && a->list[1] > a->list[2] && a->list[2] > a->list[0])
	{
		a->list = reverse_rotate_a(a, ac);
		a->list = swap_a(a, ac);
	}
	else if (a->list[0] > a->list[1] && a->list[1] < a->list[2] && a->list[2] > a->list[0])
		a->list = swap_a(a, ac);
	else if (a->list[0] < a->list[1] && a->list[1] > a->list[2] && a->list[2] < a->list[0])
		a->list = reverse_rotate_a(a, ac);
	else if (a->list[0] > a->list[1] && a->list[1] < a->list[2] && a->list[2] < a->list[0])
		rotate_a(a, ac);
	else if (a->list[0] > a->list[1] && a->list[1] > a->list[2] && a->list[2] < a->list[0])
	{
		a->list = swap_a(a, ac);
		a->list = reverse_rotate_a(a, ac);
	}
	return (a->list);
}

int *sort_four(t_list *a, t_list *b, int ac)
{
	int i;

	i = find_smallest(a);
	if (i == 0)
		return (a->list);
	else if (i == 1)
	{
		a->list = swap_a(a, ac);
		b->list = push_b(b, a, ac);
		a->list = sort_three(a, ac);
		a->list = push_a(a, b, ac);
	}
	else if (i == 2)
	{
		a->list = reverse_rotate_a(a, ac);
		a->list = reverse_rotate_a(a, ac);
		b->list = push_b(b, a, ac);
		int x = 0;
		while (x < ac)
			printf("a: %d\n", a->list[x++]);
		a->list = sort_three(a, ac);
		a->list = push_a(a, b, ac);
	}
	else if (i == 3)
	{
		a->list = reverse_rotate_a(a, ac);
		b->list = push_b(b, a, ac);
		a->list = sort_three(a, ac);
		a->list = push_a(a, b, ac);
	}
	int x = 0;
	while (x < ac)
		printf("a: %d\n", a->list[x++]);
	return (a->list);
}