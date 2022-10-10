/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:38:11 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/10 20:17:46 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	is_sorted(t_list *a, int ac)
{
	int	i;
	int j;

	i = 0;
	j = 1;
	while (j < ac)
	{
		if (a->top[i] > a->top[j])
			return (0);
		i++;
		j++;
	}
	return (1);
}