/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tt_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:32:56 by deryacar          #+#    #+#             */
/*   Updated: 2023/02/21 10:14:26 by deryacar         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	c;

	c = 0;
	if (ac > 0)
	{
		while (av[0][c])
		{
			write(1, &av[0][c], 1);
			c++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
