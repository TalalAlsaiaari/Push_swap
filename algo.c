/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:28:10 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/20 20:12:38 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	find_index(t_list *a, int *c)
{
	int	index;

	index = 0;
	while (index < a->size)
	{
		if (a->top[index] >= c[a->start] && a->top[index] < c[a->end])
			return (index);
		index++;
	}
	return (0);
}

void	get_to_top(t_list *a, int *c)
{
	int	index;

	index = find_index(a, c);
	if (index <= (a->size / 2))
	{
		while (index)
		{
			rotate_a(a);
			index--;
		}
	}
	else if (index > (a->size / 2))
	{
		while (index < a->size)
		{
			reverse_rotate_a(a);
			index++;
		}
	}
}

void	pushing_chunk_to_b(t_list *a, t_list *b, int *c)
{
	while (a->size)
	{
		get_to_top(a, c);
		if (a->top[0] > c[a->end])
			break ;
		push_b(b, a);
		if (b->top[0] < c[a->mid])
			rotate_b(b);
	}
}

void	pushing_all_chunks(t_list *a, t_list *b, int *c, int *ac)
{
	if (*ac <= 10)
		a->n = 5;
	else if (*ac > 10 && *ac <= 150)
		a->n = 8;
	else
		a->n = 18;
	a->mid = *ac / 2;
	a->offset = *ac / a->n;
	a->start = a->mid - a->offset;
	a->end = a->mid + a->offset;
	while (a->size)
	{
		pushing_chunk_to_b(a, b, c);
		a->start -= a->offset;
		if (a->start < 0)
			a->start = 0;
		a->end += a->offset;
		if (a->end >= *ac)
			a->end = *ac - 1;
	}
}

void	pushing_chunks_back(t_list *b, t_list *a)
{
	int	index;

	while (b->size)
	{
		index = find_biggest(b, b->size);
		if (index == 1)
			swap_b(b);
		else if (index <= (b->size / 2))
		{
			while (index)
			{
				rotate_b(b);
				index--;
			}
		}
		else if (index > (b->size / 2))
		{
			while (index < b->size)
			{
				reverse_rotate_b(b);
				index++;
			}
		}
		push_a(a, b);
	}
}
