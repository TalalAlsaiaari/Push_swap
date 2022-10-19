/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:50:06 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/19 23:21:22 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	swap_a(t_list *a)
{
	int	temp;

	if (a->size == 1 || !a->size)
		return ;
	temp = a->top[0];
	a->top[0] = a->top[1];
	a->top[1] = temp;
	ft_printf("sa\n");
}
