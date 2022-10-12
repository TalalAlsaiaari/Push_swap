/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:17:42 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/12 19:47:51 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	push_b(t_list *b, t_list *a)
{
	int	i;
	
	i = 0;
	if (!a->top)
		return ;
	while (i < b->size)
	{
		b->top[i + 1] = b->top[i];
		i++;
	}
	b->top[0] = a->top[0];
	b->size++;
	a->top++;
	a->size--;
	ft_printf("pb\n");
}
