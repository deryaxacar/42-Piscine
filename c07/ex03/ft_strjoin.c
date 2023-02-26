/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:49:41 by deryacar          #+#    #+#             */
/*   Updated: 2023/02/25 15:42:31 by deryacar         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	total(char **strs, int size )
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_str_length(strs[i]);
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		j;
	int		c;

	result = malloc(total(strs, size) + (size - 1) * ft_str_length(sep) + 1);
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			result[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			result[c++] = sep[j++];
		}
		i++;
	}
	result[c] = '\0';
	return (result);
}
