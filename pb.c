/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:17:42 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/07 23:08:56 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	*push_b(int *b, int *a, int ac)
{
	int	i;
	int	len;
	
	i = 0;
	while (i < ac)
		i++;
	len = i;
	if (len == 0)
		return (0);
	b[0] = a[0];
	i = 0;
	while (i < ac - 1)
	{
		a[i] = a[i + 1];
		i++;
	}
	i = 0;
	while (i < ac - 1)
		printf("a after pushing: %d\n", a[i++]);
	ft_printf("pb\n");
	return (b);
}
