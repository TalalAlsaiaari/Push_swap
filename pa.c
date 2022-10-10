/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:37:20 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/10 22:33:21 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	push_a(t_list *a, t_list *b)
{
	int x = 0;
	printf("a size in pa: %d\n", a->size);
	if (!b->size)
		return ;
	x = 0;
	while (x < a->size)
		printf("a before pushing: %d\n", a->top[x++]);
	// a->size += 1;
	a->top--;
	a->top[0] = b->top[0];
	// b->size -= 1;
	// b->top++;
	x = 0;
	while (x < a->size)
		printf("a after pushing: %d\n", a->top[x++]);
	ft_printf("pa\n");
}
