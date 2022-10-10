/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:07:21 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/10 22:35:41 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	rotate_a(t_list *a)
{
	int	i;
	int temp;

	if (a->size == 1 || !a->size)
		return ;
	i = 0;
	// printf("a.list[i]: %d\n", a->list[i]);
	temp = a->top[i];
	while (i < a->size - 1)
	{
		a->top[i] = a->top[i + 1];
		i++;
	}
	a->top[a->size - 1] = temp;
	// int x = 0;
	ft_printf("ra\n");
	// while (x < *ac)
	// 	printf("a rotated: %d\n", a->list[x++]);
}
