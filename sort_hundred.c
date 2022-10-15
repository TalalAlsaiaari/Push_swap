/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:40:58 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/15 20:27:25 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	find_index(t_list *a, int *c, int something)
{
	int	index;

	index = 0;
	while (index < a->size)
	{
		if (a->top[index] <= c[something])
			return (index);
		index++;
	}
	return (0);
}

void	get_to_top(t_list *a, int *c, int something)
{
	int	index;

	index = find_index(a, c, something);
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
	// if (a->top[0] > b->top[0] && b->top[0] > b->top[1] && b->size > 1)
	// 	rotate_b(b);
}

int	checking_a(t_list *a, int *c, int something)
{
	int	i;
	
	i = 0;
	while (i < a->size)
	{
		if (a->top[i] > c[something])
			return (1);
		i++;
	}
	return (0);
}

void	pushing_chunk_to_b(t_list *a, t_list *b, int *c, int i)
{
	int	something;

	something = i;
	while (a->size)
	{
		get_to_top(a, c, something);
		if (a->top[0] > c[something])
			break ;
		push_b(b, a);
	}
}

void	pushing_all_chunks(t_list *a, t_list *b, int *c, int *ac)
{
	int	i;

	if (*ac > 100)
		i = *ac / 10;
	else
		i = *ac / 5;
	while (a->size)
	{
		pushing_chunk_to_b(a, b, c, i);
		i += i;
		if (i > *ac)
			i = *ac - 1;
	}
}

int	*sort_hundred(t_list *a, t_list *b, int *c, int *ac)
{
	int	index;

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
	int x = 0;
	while (x < a->size)
		printf("a in sort hunned: %d\n", a->top[x++]);
	return (a->top);
}
