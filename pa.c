/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:37:20 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/09 16:29:25 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	*push_a(t_list *a, t_list *b, int ac)
{
	int		i;
	int		len;

	i = 0;
	while (i < ac)
		i++;
	len = i;
	if (len == 0)
		return (0);
	a->list--;
	a->list[0] = b->list[0];
	ft_printf("pa\n");
	return (a->list);
}
