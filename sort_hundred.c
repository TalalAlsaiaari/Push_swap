/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:28:10 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/19 23:24:13 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	find_index(t_list *a, int *c, int start, int end)
{
	int	index;

	index = 0;
	while (index < a->size)
	{
		if (a->top[index] >= c[start] && a->top[index] < c[end])
			return (index);
		index++;
	}
	return (0);
}

void	get_to_top(t_list *a, int *c, int start, int end)
{
	int	index;

	index = find_index(a, c, start, end);
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

void	pushing_chunk_to_b(t_list *a, t_list *b, int *c, int start, int end, int mid)
{
	while (a->size)
	{
		get_to_top(a, c, start, end);
		if (a->top[0] > c[end])
			break ;
		push_b(b, a);
		if (b->top[0] < c[mid])
			rotate_b(b);
	}
}

void	pushing_all_chunks(t_list *a, t_list *b, int *c, int *ac)
{
	int	n;
	int	mid;
	int	offset;
	int	start;
	int	end;

	if (*ac <= 10)
		n = 5;
	else if (*ac > 10 && *ac <= 150)
		n = 8;
	else
		n = 18;
	mid = *ac / 2;
	offset = *ac / n;
	start = mid - offset;
	end = mid + offset;
	while (a->size)
	{
		pushing_chunk_to_b(a, b, c, start, end, mid);
		start -= offset;
		if (start < 0)
			start = 0;
		end += offset;
		if (end >= *ac)
			end = *ac - 1;
	}
}

int	*sort_hundred(t_list *a, t_list *b, int *c, int *ac)
{
	int	index;

	if (is_sorted(a, a->size) == 1)
		return (a->top);
	pushing_all_chunks(a, b, c, ac);
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
	return (a->top);
}
