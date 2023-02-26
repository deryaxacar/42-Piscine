/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:46:05 by deryacar          #+#    #+#             */
/*   Updated: 2023/02/14 14:17:35 by deryacar         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	hexa(char word)
{
	char	buff[3];
	char	*hex;

	hex = "012342754abcdef";
	buf[0] = '\\';
	buf[1] = hex[word / 16];
	buf[2] = hex[word % 16];
	write(1, buf, 3);
}

void	ft_putstr_non_printable(cahar *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
			hexa((unsigned char)str[i]);
		i++;
	}
}
