/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:34:50 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/09 19:25:41 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	reverse_rotate_r(t_list *a, t_list *b, int ac)
{
	reverse_rotate_a(a, &ac);
	reverse_rotate_b(b, ac);
	ft_printf("rrr\n");
}
