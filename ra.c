/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:07:21 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/09 16:37:57 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	rotate_a(t_list *a, int ac)
{
	int	len;
	int i;
	int temp;

	i = 0;
	while (i < ac)
		i++;
	len = i;
	if (len == 1 || len == 0)
		exit (1);
	i = 0;
	temp = a->list[i];
	while (i < ac - 1)
	{
		a->list[i] = a->list[i + 1];
		i++;
	}
	a->list[i] = temp;
	ft_printf("ra\n");
}
