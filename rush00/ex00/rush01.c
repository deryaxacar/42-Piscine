/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcakmak <zcakmak@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 03:08:06 by zcakmak           #+#    #+#             */
/*   Updated: 2023/02/06 16:49:30 by deryacar         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c); //mainde o dosyayı görünce oraya yönlendir.

void	ft_letter(int x, char first_l, char middle_l, char last_l)
{
	int	counter;

	counter = 1; //sütun
	while (counter <= x)
	{
		if (counter == 1) 
			ft_putchar(first_l);
		else if (counter == x) 
			ft_putchar(last_l); 
		else 
			ft_putchar(middle_l); 
		counter++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	l_counter;

	l_counter = 1;
	if (x >= 1 && y >= 1)
	{
		while (l_counter <= y)
		{
			if (l_counter == 1) 
				ft_letter(x, '/', '*', '\\');
			else if (l_counter == y) 
				ft_letter(x, '\\', '*', '/');
			else 
				ft_letter(x, '*', ' ', '*');
			l_counter++;
		}
	}
}
