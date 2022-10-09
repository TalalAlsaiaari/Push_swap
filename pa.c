/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:37:20 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/09 19:34:50 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	push_a(t_list *a, t_list *b, int *ac)
{
	int		i;
	int		len;

	i = 0;
	while (i < *ac)
		i++;
	len = i;
	if (len == 0)
		exit (1);
	int x = 0;
	printf("ac in pa: %d\n", *ac);
	*ac += 1;
	printf("ac in pa: %d\n", *ac);
	while (x < *ac)
		printf("a before pushing back to a: %d\n", a->list[x++]);
	a->list--;
	a->list[0] = b->list[0];
	ft_printf("pa\n");
}
