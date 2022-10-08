/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:17:42 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/08 21:33:57 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	*push_b(t_list *b, t_list *a, int ac)
{
	int	i;
	int	len;
	int	*temp;
	
	i = 0;
	while (i < ac)
		i++;
	len = i;
	if (len == 0)
		return (0);
	temp = (int *)malloc(sizeof(int) * (ac - 1));
	i = 0;
	while (i < ac - 1)
	{
		temp[i] = a->list[i + 1];
		i++;
	}
	free (a->list);
	b->list[0] = a->list[0];
	a->list = (int *)malloc(sizeof(int) * (ac - 1));
	i = 0;
	while (i < ac)
	{
		a->list[i] = temp[i];
		i++;
	}
	free (temp);
	ft_printf("pb\n");
	return (b->list);
}
