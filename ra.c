/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:07:21 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/09 19:29:03 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	rotate_a(t_list *a, int *ac)
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
	printf("a.list[i]: %d\n", a->list[i]);
	temp = a->list[i];
	while (i < *ac - 1)
	{
		a->list[i] = a->list[i + 1];
		i++;
	}
	a->list[i] = temp;
	int x = 0;
	ft_printf("ra\n");
	while (x < *ac)
		printf("a rotated: %d\n", a->list[x++]);
}
