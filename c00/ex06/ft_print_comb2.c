/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 09:54:39 by deryacar          #+#    #+#             */
/*   Updated: 2023/02/26 09:54:43 by deryacar         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_char((a / 10) + 48);
			ft_char((a % 10) + 48);
			ft_char(' ');
			ft_char((b / 10) + 48);
			ft_char((b % 10) + 48);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
