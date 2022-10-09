/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:50:06 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/09 19:17:47 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	swap_a(t_list *a, int *ac)
{
	int	len;
	int i;
	int temp;

	i = 0;
	while (i < *ac)
		i++;
	len = i;
	if (len == 1 || len == 0)
		exit (1);
	i = 0;
	temp = a->list[i];
	a->list[i] = a->list[i + 1];
	a->list[i + 1] = temp;
	ft_printf("sa\n");
}
