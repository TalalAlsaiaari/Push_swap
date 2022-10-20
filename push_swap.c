/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:37:36 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/20 21:28:49 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	push_swap(t_list a, t_list b, int *c, int ac)
{
	if (ac == 3)
		sort_three(&a);
	if (ac == 4)
		sort_four(&a, &b);
	if (ac == 5)
		sort_five(&a, &b);
	if (ac > 5)
		big_sort(&a, &b, c, &ac);
}
