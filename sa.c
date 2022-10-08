/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:50:06 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/08 19:28:25 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	*swap_a(t_list *a, int ac)
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
	temp = a->list[i];
	a->list[i] = a->list[i + 1];
	a->list[i + 1] = temp;
	ft_printf("sa\n");
	return (a->list);
}
