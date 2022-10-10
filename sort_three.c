/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:51:16 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/10 21:51:28 by talsaiaa         ###   ########.fr       */
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
	return (a->top);
}

int *sort_four(t_list *a, t_list *b, int *ac)
{
	int i;

	i = find_smallest(a, ac);
	if (i == 1)
		swap_a(a);
	else if (i == 2)
	{
		reverse_rotate_a(a);
		reverse_rotate_a(a);
	}
	else if (i == 3)
		reverse_rotate_a(a);
	if (is_sorted(a, *ac) == 0)
	{
		push_b(b, a);
		sort_three(a);
		push_a(a, b);
	}
	int x = 0;
	while (x < *ac)
		printf("a in sort four: %d\n", a->top[x++]);
	return (a->top);
}

int *sort_five(t_list *a, t_list *b, int *ac)
{
	int	i;

	i = find_smallest(a, ac);
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
	if (is_sorted(a, *ac) == 0)
	{
		push_b(b, a);
		sort_four(a, b, ac);
		push_a(a, b);
	}
	int x = 0;
	while (x < *ac)
		printf("a sorted: %d\n", a->top[x++]);
	return (a->top);
}