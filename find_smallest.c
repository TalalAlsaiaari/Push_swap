/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_smallest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:35:44 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/15 17:49:38 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	find_smallest(t_list *a, int asize)
{
	int	min;
	int	index;
	int	i;

	i = 0;
	min = INT_MAX;
	while (i < asize)
	{
		if (a->top[i] < min)
		{
			min = a->top[i];
			index = i;
		}
		i++;
	}
	return (index);
}