/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_smallest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:35:44 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/09 18:45:00 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	find_smallest(t_list *a, int ac)
{
	int	min;
	int	index;
	int	i;

	i = 0;
	min = INT_MAX;
	while (i < ac)
	{
		if (a->list[i] < min)
		{
			min = a->list[i];
			index = i;
		}
		i++;
	}
	return (index);
}