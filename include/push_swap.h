/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:15:24 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/07 23:00:51 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"

char			*ft_strsep(int size, char **strs, char *sep);
long int		special_atoi(char *str);
int				*ft_intint(int *s, int c, int size);
int				*swap_a(int *a, int ac);
int				*swap_b(int *b, int ac);
void			swap_s(int *a, int *b, int ac);
int				*rotate_a(int *a, int ac);
int				*rotate_b(int *b, int ac);
void			rotate_r(int *a, int *b, int ac);
int				*reverse_rotate_a(int *a, int ac);
int				*reverse_rotate_b(int *b, int ac);
void			reverse_rotate_r(int *a, int *b, int ac);
int				*push_a(int *a, int *b, int ac);
int				*push_b(int *b, int *a, int ac);

#endif