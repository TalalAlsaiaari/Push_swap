/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 17:04:32 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/20 17:53:27 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "include/push_swap.h"

int	str_len(char *str)
{
	int	j;

	j = 0;
	while (str[j])
		j++;
	return (j);
}

int	dest_len(char **strs, int size, char *sep)
{
	int	i;
	int	sep_len;
	int	dest_len;

	i = 0;
	dest_len = 0;
	sep_len = str_len(sep);
	while (i < size)
	{
		dest_len += str_len(strs[i]);
		dest_len += sep_len;
		i++;
	}
	dest_len -= sep_len;
	return (dest_len);
}

int	whiling(char **strs, char *dest, int i, int size)
{
	int			j;
	static int	x;

	j = 0;
	while (strs[i][j])
	{
		if (ft_strchr(strs[i], '\t') != 0 || ft_strchr(strs[i], ' ') != 0)
		{
			while (strs[i][j] == ' ' || strs[i][j] == '\t')
				j++;
			while (strs[i][j] != ' ' && strs[i][j] != '\t' && strs[i][j])
				dest[x++] = strs[i][j++];
			if (strs[i][j] != '\0')
				dest[x++] = ' ';
			while (strs[i][j] == ' ' || strs[i][j] == '\t')
				j++;
		}
		else
			dest[x++] = strs[i][j++];
	}
	if (i < size - 1)
		dest[x++] = ' ';
	return (x);
}

void	string_check(char **strs, char *dest, int size)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (i < size)
	{
		x = whiling(strs, dest, i, size);
		i++;
	}
	dest[x] = '\0';
}

char	*ft_strsep(int size, char **strs, char *sep)
{
	char	*dest;
	int		final_len;

	if (size <= 0)
	{
		ft_putstr_fd("Error\n", 2);
		exit (1);
	}
	final_len = dest_len(strs, size, sep);
	if (size == 0)
		return ((char *)malloc(sizeof (char)));
	dest = (char *)malloc((final_len + 1) * sizeof(char));
	if (dest == 0)
		return (0);
	string_check(strs, dest, size);
	return (dest);
}
