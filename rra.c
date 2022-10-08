/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:22:54 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/08 21:18:18 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	*reverse_rotate_a(t_list *a, int ac)
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
	temp = a->list[i - 1];
	i -= 1;
	while (i > 0)
	{
		a->list[i] = a->list[i - 1];
		i--;
	}
	a->list[0] = temp;
	ft_printf("rra\n");
	return (a->list);
}
