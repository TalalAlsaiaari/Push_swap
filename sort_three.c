/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:51:16 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/09 18:43:15 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	*sort_three(t_list *a, int ac)
{
	if (a->list[0] < a->list[1] && a->list[1] < a->list[2] && a->list[2] > a->list[0])
		return (a->list);
	else if (a->list[0] < a->list[1] && a->list[1] > a->list[2] && a->list[2] > a->list[0])
	{
		reverse_rotate_a(a, ac);
		swap_a(a, ac);
	}
	else if (a->list[0] > a->list[1] && a->list[1] < a->list[2] && a->list[2] > a->list[0])
		swap_a(a, ac);
	else if (a->list[0] < a->list[1] && a->list[1] > a->list[2] && a->list[2] < a->list[0])
		reverse_rotate_a(a, ac);
	else if (a->list[0] > a->list[1] && a->list[1] < a->list[2] && a->list[2] < a->list[0])
		rotate_a(a, ac);
	else if (a->list[0] > a->list[1] && a->list[1] > a->list[2] && a->list[2] < a->list[0])
	{
		swap_a(a, ac);
		reverse_rotate_a(a, ac);
	}
	int x = 0;
	while (x < ac)
		printf("a: %d\n", a->list[x++]);
	return (a->list);
}

int *sort_four(t_list *a, t_list *b, int ac)
{
	int i;

	i = find_smallest(a, ac);
	if (i == 0)
		return (a->list);
	else if (i == 1)
	{
		swap_a(a, ac);
		push_b(b, a, ac);
		sort_three(a, ac);
		push_a(a, b, ac);
	}
	else if (i == 2)
	{
		reverse_rotate_a(a, ac);
		reverse_rotate_a(a, ac);
		push_b(b, a, ac);
		sort_three(a, ac);
		push_a(a, b, ac);
	}
	else if (i == 3)
	{
		reverse_rotate_a(a, ac);
		push_b(b, a, ac);
		sort_three(a, ac);
		push_a(a, b, ac);
	}
	int x = 0;
	while (x < ac)
		printf("a: %d\n", a->list[x++]);
	return (a->list);
}