/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:40:58 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/18 19:01:02 by talsaiaa         ###   ########.fr       */
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
	// if (index == 1)
	// 	swap_a(a);
	if (index <= (a->size / 2))
	{
		while (index)
		{
			rotate_a(a);
			index--;
		}
	}
	if (index > (a->size / 2))
	{
		while (index < a->size)
		{
			reverse_rotate_a(a);
			index++;
		}
	}
}

void	pushing_chunk_to_b(t_list *a, t_list *b, int *c, int start, int end)
{
	while (a->size)
	{
		get_to_top(a, c, start, end);
		if (a->top[0] > c[end])
			break ;
		push_b(b, a);
	}
}

void	pushing_all_chunks(t_list *a, t_list *b, int *c, int offset, int start, int end, int *ac)
{
	while (a->size)
	{
		pushing_chunk_to_b(a, b, c, start, end);
		start -= offset;
		end += offset;
		if (end > *ac)
			end = *ac - 1;
	}
}

// void	pushing_chunk_back(t_list *b, t_list *a)
// {
// 	int	index;

// 	while (b->size)
// 	{
// 		index = find_biggest(b, b->size);
// 		if (index == 1)
// 			swap_b(b);
// 		else if (index <= (b->size / 2))
// 		{
// 			while (index)
// 			{
// 				rotate_b(b);
// 				index--;
// 			}
// 		}
// 		else if (index > (b->size / 2))
// 		{
// 			while (index < b->size)
// 			{
// 				reverse_rotate_b(b);
// 				index++;
// 			}
// 		}
// 		push_a(a, b);
// 	}
// }

int	*sort_hundred(t_list *a, t_list *b, int *c, int *ac)
{
	int number_of_chunks;
	int	mid;
	int	offset;
	int	start;
	int	end;

	if (*ac <= 10)
		number_of_chunks = 5;
	else if (*ac > 10 && *ac <= 150)
		number_of_chunks = 8;
	else
		number_of_chunks = 18;
	mid = *ac / 2;
	offset = a->size / number_of_chunks;
	start = mid - offset;
	end = mid + offset;
	// if (i > *ac);
	// 	i = *ac - 1;
	while (a->size)
	{
		pushing_all_chunks(a, b, c, offset, start, end, ac);
		// pushing_chunk_back(b, a);
	}
	// int x = 0;
	// while (x < a->size)
	// 	printf("a in sort hunned: %d\n", a->top[x++]);
	return (a->top);
}
