/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:17:42 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/14 17:45:08 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	push_b(t_list *b, t_list *a)
{
	int	i;
	
	i = 0;
	if (!a->size)
		return ;
	b->size++;
	i = b->size - 1;
	while (i > 0)
	{
		b->top[i] = b->top[i - 1];
		i--;
	}
	b->top[0] = a->top[0];
	a->top++;
	a->size--;
	ft_printf("pb\n");
	// int x = 0;
	// while (x < a->size)
	// 	printf("a in pb: %d\n", a->top[x++]);
	// x = 0;
	// while (x < b->size)
	// 	printf("b in pb: %d\n", b->top[x++]);
}
