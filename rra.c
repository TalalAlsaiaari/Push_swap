/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:22:54 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/17 20:49:26 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	reverse_rotate_a(t_list *a)
{
	int temp;
	int	i;

	if (a->size == 1 || !a->size)
		return ;
	temp = a->top[a->size - 1];
	i = a->size - 1;
	while (i > 0)
	{
		a->top[i] = a->top[i - 1];
		i--;
	}
	a->top[0] = temp;
	ft_printf("rra\n");
}
