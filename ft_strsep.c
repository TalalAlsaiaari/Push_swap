/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 17:04:32 by talsaiaa          #+#    #+#             */
/*   Updated: 2022/10/01 23:18:43 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		str_len(char *str)
{
	int j;

	j = 0;
	while (str[j])
		j++;
	return (j);
}

int		dest_len(char **strs, int size, char *sep)
{
	int i;
	int sep_len;
	int dest_len;

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

char	*ft_strsep(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;
	int		x;
	int		final_len;

	i = 0;
	x = 0;
	final_len = dest_len(strs, size, sep);
	if (size == 0)
		return ((char*)malloc(sizeof(char)));
	if (!(dest = (char*)malloc((final_len + 1) * sizeof(char))))
		return (0);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			dest[x++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size - 1)
			dest[x++] = sep[j++];
		i++;
	}
	dest[x] = '\0';
	return (dest);
}
