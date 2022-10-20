/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:23:10 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/20 20:28:54 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

char	*args_checker(int ac, char **av)
{
	char	*temp;
	int		i;

	i = 0;
	temp = ft_strsep(ac - 1, av + 1, " ");
	if ((temp[i] == '-' || temp[i] == '+')
		&& (temp[i + 1] == '-' || temp[i + 1] == '+' || temp[i + 1] == '\0'))
	{
		ft_putstr_fd("Error\n", 2);
		free (temp);
		exit (1);
	}
	return (temp);
}
