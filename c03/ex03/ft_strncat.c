/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:24:35 by deryacar          #+#    #+#             */
/*   Updated: 2023/02/16 18:02:26 by deryacar         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && src[j] != '\0')
	{
		dest[i + j] = src [j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
