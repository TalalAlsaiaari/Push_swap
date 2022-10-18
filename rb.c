/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:18:50 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/17 20:49:23 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	rotate_b(t_list *b)
{
	int i;
	int temp;

	if (b->size == 1 || !b->size)
		return ;
	i = 0;
	temp = b->top[i];
	while (i < b->size - 1)
	{
		b->top[i] = b->top[i + 1];
		i++;
	}
	b->top[b->size - 1] = temp;
	ft_printf("rb\n");
}
