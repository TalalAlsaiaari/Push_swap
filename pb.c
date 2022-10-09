/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:17:42 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/09 16:30:15 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	*push_b(t_list *b, t_list *a, int ac)
{
	int	i;
	int	len;
	
	i = 0;
	while (i < ac)
		i++;
	len = i;
	if (len == 0)
		return (0);
	b->list[0] = a->list[0];
	a->list++;
	ft_printf("pb\n");
	return (b->list);
}
