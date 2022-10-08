/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:18:50 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/08 19:24:58 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	*rotate_b(t_list *b, int ac)
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
	i = 0;
	temp = b->list[i];
	while (i < ac - 1)
	{
		b->list[i] = b->list[i + 1];
		i++;
	}
	b->list[i] = temp;
	ft_printf("rb\n");
	return (b->list);
}
