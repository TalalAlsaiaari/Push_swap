/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:02:19 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/10 21:46:10 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	swap_b(t_list *b)
{
	int temp;

	if (b->size== 1 || !b->size)
		return ;
	temp = b->top[0];
	b->top[0] = b->top[1];
	b->top[1] = temp;
	ft_printf("sb\n");
}
