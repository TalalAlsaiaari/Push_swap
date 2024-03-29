/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:15:24 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/20 20:15:34 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"
# include <limits.h>

typedef struct s_list
{
	int	*top;
	int	size;
	int	n;
	int	mid;
	int	offset;
	int	start;
	int	end;
}			t_list;

char			*ft_strsep(int size, char **strs, char *sep);
long int		special_atoi(char *str, int *a, char **two_d);
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
int				find_smallest(t_list *a, int asize);
int				*sort_four(t_list *a, t_list *b);
int				is_sorted(t_list *a, int asize);
int				*sort_five(t_list *a, t_list *b);
int				*compare_stack(t_list *a, int ac);
int				*big_sort(t_list *a, t_list *b, int *c, int *ac);
int				find_biggest(t_list *b, int bsize);
void			error_free(char **two_d, int *a);
char			*args_checker(int ac, char **av);
void			push_swap(t_list a, t_list b, int *c, int ac);
void			pushing_chunks_back(t_list *b, t_list *a);
void			pushing_all_chunks(t_list *a, t_list *b, int *c, int *ac);

#endif