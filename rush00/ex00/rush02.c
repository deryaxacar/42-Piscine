/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcakmak <zcakmak@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 04:03:34 by zcakmak           #+#    #+#             */
/*   Updated: 2023/02/05 04:34:02 by zcakmak          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_letter(int x, char first_l, char middle_l, char last_l)
{
	int	counter;

	counter = 1;
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
				ft_letter(x, 'A', 'B', 'A');
			else if (l_counter == y)
				ft_letter(x, 'C', 'B', 'C');
			else
				ft_letter(x, 'B', ' ', 'B');
			l_counter++;
		}
	}
}
