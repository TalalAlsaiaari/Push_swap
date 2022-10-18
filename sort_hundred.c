/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:40:58 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/17 23:20:57 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	find_index(t_list *a, int *c, int top)
{
	int	index;
	int	bottom;

	index = 0;
	if (top == 15)
		bottom = 0;
	else if (top == 45)
		bottom = 15;
	else if (top == 75)
		bottom = 45;
	else
		bottom = 75;
	if (top != 15)
	{
		while (index < a->size)
		{
			if (a->top[index] >= c[bottom] && a->top[index] <= c[top])
				break ;
			index++;
		}
	}
	while (index < a->size)
	{
		if (a->top[index] >= c[bottom] && a->top[index] <= c[top])
			return (index);
		index++;
	}
	return (-1);
}

void	get_to_top(t_list *a, int *c, int top)
{
	int	index;
	// int offset;

	index = find_index(a, c, top);
	// if (top == 15)
	// 	offset = 0;
	// else if (top == 45)
	// 	offset = 30;
	// else if (top == 75)
	// 	offset = 30;
	// else
	// 	offset = 30;
	if (index == 1)
		swap_a(a);
	else if (index <= (a->size / 2))
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

void	pushing_chunk_to_b(t_list *a, t_list *b, int *c, int top)
{
	int	numbers_to_push;

	if (top == 15)
		numbers_to_push = 0;
	else if (top == 45)
		numbers_to_push = 15;
	else if (top == 75)
		numbers_to_push = 45;
	else
		numbers_to_push = 75;
	while (numbers_to_push <= top)
	{
		get_to_top(a, c, top);
		// if (a->top[0] > c[something])
		// 	break ;
		push_b(b, a);
		numbers_to_push++;
	}
}

// void	pushing_all_chunks(t_list *a, t_list *b, int *c, int *ac)
// {
// 	int	i;

// 	// if (*ac > 100)
// 	// 	i = *ac / 10;
// 	// else
// 	// 	i = *ac / 5;
// 	i = 15;
// 	if (i > *ac)
// 		i = *ac - 1;
// 	while (a->size)
// 	{
// 		pushing_chunk_to_b(a, b, c, i);
// 		i += 30;
// 		if (i > *ac)
// 			i = *ac - 1;
// 	}
// }

void	pushing_chunk_back(t_list *b, t_list *a)
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

int	*sort_hundred(t_list *a, t_list *b, int *c, int *ac)
{
	int	size_of_chunk;
	int number_of_chunks;

	size_of_chunk = 15;
	number_of_chunks = 4;
	// if (i > *ac);
	// 	i = *ac - 1;
	while (number_of_chunks >= 0)
	{
		pushing_chunk_to_b(a, b, c, size_of_chunk);
		pushing_chunk_back(b, a);
		size_of_chunk += 30;
		if (size_of_chunk > *ac)
			size_of_chunk = *ac - 1;
		number_of_chunks--;
	}
	// int x = 0;
	// while (x < a->size)
	// 	printf("a in sort hunned: %d\n", a->top[x++]);
	return (a->top);
}
