/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:37:20 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/19 12:39:02 by talsaiaa         ###   ########.fr       */
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
	while (i < b->size - 1)
	{
		b->top[i] = b->top[i + 1];
		i++;
	}
	b->size--;
	ft_printf("pa\n");
}
