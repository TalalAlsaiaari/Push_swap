/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:37:20 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/09 16:01:09 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	*push_a(t_list *a, t_list *b, int ac)
{
	int		i;
	int		len;
	int		*temp;

	i = 0;
	while (i < ac)
		i++;
	len = i;
	if (len == 0)
		return (0);
	temp = (int *)malloc(sizeof(int) * ac);
	i = 0;
	while (i < ac)
	{
		temp[i] = a->list[i];
		i++;
	}
	a->list[0] = b->list[0];
	i = 0;
	while (i < ac)
	{
		a->list[i + 1] = temp[i];
		i++;
	}
	free (temp);
	ft_printf("pa\n");
	return (a->list);
}
