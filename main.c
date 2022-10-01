/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:29:05 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/01 15:33:34 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_printf("\n");
		return (1);
	}
	ft_printf("here you go: %d\n", ft_atoi(av[1]));
	return (0);
}