/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:38:29 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/19 22:54:24 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	error_free(char **two_d, int *a)
{
	int	i;

	i = 0;
	while (two_d[i])
	{
		free (two_d[i]);
		i++;
	}
	free (two_d);
	free (a);
	exit (1);
}
