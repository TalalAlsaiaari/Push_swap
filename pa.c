/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:37:20 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/07 21:04:54 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	*push_a(int *a, int *b, int ac)
{
	int	*a_push;
	int	i;
	int	len;
	
	i = 0;
	while (i < ac)
		i++;
	len = i;
	if (len == 0)
		return (0);
	a_push = (int *)malloc((sizeof(int) * ac) + 1);
	if (a_push == 0)
		return (0);
	a_push[0] = b[0];
	i = 0;
	while (i < ac)
	{
		a_push[i + 1] = a[i + 1];
		i++;
	}
	int x = 0;
	while (x < ac)
	{
		printf("a after pushing: %d\n", a_push[x++]);
	}
	ft_printf("pa\n");
	return (a_push);
}
