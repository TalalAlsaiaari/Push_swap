/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:17:42 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/07 22:51:12 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	*push_b(int *a, int ac)
{
	int	i;
	int	*b;
	int	len;
	
	b = (int *)malloc(sizeof(int) * 1);
	i = 0;
	while (i < ac)
		i++;
	len = i;
	if (len == 0)
		return (0);
	b = (int *)malloc(sizeof(int) * 1);
	if (b == 0)
		return (0);
	b[0] = a[0];
	ft_printf("pb\n");
	return (b);
}
