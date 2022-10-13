/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_biggest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:22:14 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/13 22:25:56 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	find_biggest(t_list *b, int *bsize)
{
	int	max;
	int	index;
	int	i;

	i = 0;
	max = INT_MIN;
	while (i < *bsize)
	{
		if (b->top[i] > max)
		{
			max = b->top[i];
			index = i;
		}
		i++;
	}
	return (index);
}