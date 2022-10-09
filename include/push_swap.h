/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:15:24 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/09 23:42:33 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"
# include <limits.h>

typedef struct s_list
{
	int	*list;
}			t_list;

char			*ft_strsep(int size, char **strs, char *sep);
long int		special_atoi(char *str);
int				*ft_intint(int *s, int c, int size);
void			swap_a(t_list *a, int *ac);
void			swap_b(t_list *b, int ac);
void			swap_s(t_list *a, t_list *b, int ac);
void			rotate_a(t_list *a, int *ac);
void			rotate_b(t_list *b, int ac);
void			rotate_r(t_list *a, t_list *b, int ac);
void			reverse_rotate_a(t_list *a, int *ac);
void			reverse_rotate_b(t_list *b, int ac);
void			reverse_rotate_r(t_list *a, t_list *b, int ac);
void			push_a(t_list *a, t_list *b, int *ac);
void			push_b(t_list *b, t_list *a, int *ac);
int				*sort_three(t_list *a, int *ac);
int				find_smallest(t_list *a, int *ac);
int 			*sort_four(t_list *a, t_list *b, int *ac);
int				is_sorted(t_list *a, int ac);
int 			*sort_five(t_list *a, t_list *b, int *ac);
int				*compare_stack(t_list *a, int ac);


#endif