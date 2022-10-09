/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:20:45 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/09 19:25:32 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	rotate_r(t_list *a, t_list *b, int ac)
{
	rotate_a(a, &ac);
	rotate_b(b, ac);
	ft_printf("rr\n");
}
