/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_smallest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:35:44 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/08 19:19:06 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	find_smallest(t_list *a)
{
	if (a->list[0] < a->list[1] && a->list[0] < a->list[2] && a->list[0] < a->list[3])
		return (0);
	else if (a->list[0] > a->list[1] && a->list[1] < a->list[2] && a->list[1] < a->list[3])
		return (1);
	else if (a->list[0] > a->list[2] && a->list[1] > a->list[2] && a->list[2] < a->list[3])
		return (2);
	else if (a->list[0] > a->list[3] && a->list[1] > a->list[3] && a->list[2] > a->list[3])
		return (3);
	return (-1);
}