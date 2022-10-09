/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:40:58 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/10 00:05:29 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	get_index(t_list *a, int *c, int i, int j)
{
	if (a->list[i] <= c[j])
		return (i);
	return (-1);
}

int	*sort_hundred(t_list *a, t_list *b, int *c, int *ac)
{
	int	i;
	int	j;
	int	index;

	i = 0;
	j = 0;
	while (j < *ac / 2)
	{
		while (i < *ac)
		{
			index = get_index(a, c, i, j);
			if (index <= *ac / 2)
				low_index();
			else if (index > *ac / 2)
				big_index();
			i++;
		}
		i = 0;
		j++;
	}
}