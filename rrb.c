/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:33:00 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/08 19:26:56 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	*reverse_rotate_b(t_list *b, int ac)
{
	int	len;
	int i;
	int temp;

	i = 0;
	while (i < ac)
		i++;
	len = i;
	if (len == 1 || len == 0)
		return (0);
	temp = b->list[i - 1];
	while (i > 0)
	{
		b->list[i] = b->list[i - 1];
		i--;
	}
	b->list[0] = temp;
	ft_printf("rrb\n");
	return (b->list);
}
