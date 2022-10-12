/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:38:11 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/12 23:45:44 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	is_sorted(t_list *a, int asize)
{
	int	i;
	int j;

	i = 0;
	j = 1;
	while (j < asize)
	{
		if (a->top[i] > a->top[j])
			return (0);
		i++;
		j++;
	}
	return (1);
}