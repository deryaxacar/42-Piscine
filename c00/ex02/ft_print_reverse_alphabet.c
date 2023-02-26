/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 09:47:31 by deryacar          #+#    #+#             */
/*   Updated: 2023/02/26 09:47:35 by deryacar         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alphabet;

	alphabet = 'z';
	while (alphabet >= 'a' )
	{
		write(1, &alphabet, 1);
		alphabet--;
	}
}
