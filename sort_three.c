/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:51:16 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/12 23:45:35 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	*sort_three(t_list *a)
{
	if (a->top[0] < a->top[1] && a->top[1] < a->top[2] && a->top[2] > a->top[0])
		return (a->top);
	else if (a->top[0] < a->top[1] && a->top[1] > a->top[2] && a->top[2] > a->top[0])
	{
		reverse_rotate_a(a);
		swap_a(a);
	}
	else if (a->top[0] > a->top[1] && a->top[1] < a->top[2] && a->top[2] > a->top[0])
		swap_a(a);
	else if (a->top[0] < a->top[1] && a->top[1] > a->top[2] && a->top[2] < a->top[0])
		reverse_rotate_a(a);
	else if (a->top[0] > a->top[1] && a->top[1] < a->top[2] && a->top[2] < a->top[0])
		rotate_a(a);
	else if (a->top[0] > a->top[1] && a->top[1] > a->top[2] && a->top[2] < a->top[0])
	{
		swap_a(a);
		reverse_rotate_a(a);
	}
	int x = 0;
	while (x < a->size)
		printf("a in 3 sorted: %d\n", a->top[x++]);
	return (a->top);
}

int *sort_four(t_list *a, t_list *b)
{
	int i;

	i = find_smallest(a, &a->size);
	if (i == 1)
		swap_a(a);
	else if (i == 2)
	{
		reverse_rotate_a(a);
		reverse_rotate_a(a);
	}
	else if (i == 3)
		reverse_rotate_a(a);
	if (is_sorted(a, a->size) == 0)
	{
		push_b(b, a);
		sort_three(a);
		push_a(a, b);
	}
	int x = 0;
	while (x < a->size)
		printf("a in 4 sorted: %d\n", a->top[x++]);
	return (a->top);
}

int *sort_five(t_list *a, t_list *b)
{
	int	i;

	i = find_smallest(a, &a->size);
	if (i == 1)
		swap_a(a);
	else if (i == 2)
	{
		rotate_a(a);
		rotate_a(a);
	}
	else if (i == 3)
	{
		reverse_rotate_a(a);
		reverse_rotate_a(a);
	}
	else if (i == 4)
		reverse_rotate_a(a);
	if (is_sorted(a, a->size) == 0)
	{
		push_b(b, a);
		sort_four(a, b);
		push_a(a, b);
	}
	int x = 0;
	while (x < a->size)
		printf("a in 5 sorted: %d\n", a->top[x++]);
	return (a->top);
}