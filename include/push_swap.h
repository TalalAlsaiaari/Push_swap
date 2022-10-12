/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:15:24 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/12 23:46:01 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"
# include <limits.h>

typedef struct s_list
{
	int	*top;
	int	size;
}			t_list;

char			*ft_strsep(int size, char **strs, char *sep);
long int		special_atoi(char *str);
int				*ft_intint(int *s, int c, int size);
void			swap_a(t_list *a);
void			swap_b(t_list *b);
void			swap_s(t_list *a, t_list *b);
void			rotate_a(t_list *a);
void			rotate_b(t_list *b);
void			rotate_r(t_list *a, t_list *b);
void			reverse_rotate_a(t_list *a);
void			reverse_rotate_b(t_list *b);
void			reverse_rotate_r(t_list *a, t_list *b);
void			push_a(t_list *a, t_list *b);
void			push_b(t_list *b, t_list *a);
int				*sort_three(t_list *a);
int				find_smallest(t_list *a, int *asize);
int 			*sort_four(t_list *a, t_list *b);
int				is_sorted(t_list *a, int asize);
int 			*sort_five(t_list *a, t_list *b);
int				*compare_stack(t_list *a, int ac);
int				*sort_hundred(t_list *a, t_list *b, int *c, int *ac);


#endif