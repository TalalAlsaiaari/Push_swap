/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:17:42 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/10 22:33:59 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	push_b(t_list *b, t_list *a)
{
	if (!a->size)
		return ;
	int x = 0;
	while (x < b->size)
		printf("b before pushing: %d\n", b->top[x++]);
	// b->size += 1;
	b->top[0] = a->top[0];
	// b->top--;
	// a->size -= 1;
	a->top++;
	x = 0;
	while (x < b->size)
		printf("b after pushing: %d\n", b->top[x++]);
	// int x = 0;
	ft_printf("pb\n");
	// while (x < *ac)
	// 	printf("a after pushing to b: %d\n", a->list[x++]);
}
