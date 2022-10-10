/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:33:00 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/10 22:40:10 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	reverse_rotate_b(t_list *b)
{
	int i;
	int temp;

	if (b->size == 1 || !b->size)
		return ;
	temp = b->top[b->size - 1];
	i = b->size - 2;
	while (i > 0)
	{
		b->top[i] = b->top[i - 1];
		i--;
	}
	b->top[0] = temp;
	ft_printf("rrb\n");
}
