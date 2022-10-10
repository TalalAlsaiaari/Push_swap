/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_smallest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:35:44 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/10 20:17:11 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	find_smallest(t_list *a, int *ac)
{
	int	min;
	int	index;
	int	i;

	i = 0;
	min = INT_MAX;
	while (i < *ac)
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