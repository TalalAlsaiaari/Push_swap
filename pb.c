/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:17:42 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/09 19:26:06 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	push_b(t_list *b, t_list *a, int *ac)
{
	int	i;
	int	len;
	
	i = 0;
	while (i < *ac)
		i++;
	len = i;
	if (len == 0)
		exit (1);
	b->list[0] = a->list[0];
	a->list++;
	*ac -= 1;
	int x = 0;
	ft_printf("pb\n");
	while (x < *ac)
		printf("a after pushing to b: %d\n", a->list[x++]);
}
