/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:38:11 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/19 23:14:17 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	is_sorted(t_list *a, int asize)
{
	int	i;
	int	j;

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
