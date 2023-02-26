/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 09:45:49 by deryacar          #+#    #+#             */
/*   Updated: 2023/02/26 09:45:57 by deryacar         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		write(1, &alphabet, 1);
		alphabet++;
	}
}
