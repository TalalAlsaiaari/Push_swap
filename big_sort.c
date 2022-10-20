/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:11:01 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/20 20:19:32 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	*big_sort(t_list *a, t_list *b, int *c, int *ac)
{
	if (is_sorted(a, a->size) == 1)
		return (a->top);
	pushing_all_chunks(a, b, c, ac);
	pushing_chunks_back(b, a);
	return (a->top);
}
