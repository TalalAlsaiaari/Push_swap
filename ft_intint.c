/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:38:32 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/02 17:21:16 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	*ft_intint(int *s, int c, int size)
{
	int			i;

	i = 0;
	while (i <= size)
	{
		if (s[i] == c)
			return (&s[i]);
		if (s[i] == 0 && c == 0)
			return (&s[i]);
		i++;
	}
	return (0);
}
