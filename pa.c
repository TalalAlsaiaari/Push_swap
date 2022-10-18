/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:37:20 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/17 20:49:12 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	push_a(t_list *a, t_list *b)
{
	int	i;

	if (!b->size)
		return ;
	a->size++;
	a->top--;
	a->top[0] = b->top[0];
	i = 0;
	// printf("b size: %d\n", b->size);
	while (i < b->size)
	{
		// printf("yp\n");
		b->top[i] = b->top[i + 1];
		i++;
	}
	b->size--;
	ft_printf("pa\n");
	// int x = 0;
	// while (x < a->size)
	// 	printf("a in pa: %d\n", a->top[x++]);
	// x = 0;
	// while (x < b->size)
	// 	printf("b in pa: %d\n", b->top[x++]);
}
