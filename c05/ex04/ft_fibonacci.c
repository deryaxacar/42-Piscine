/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:06:04 by deryacar          #+#    #+#             */
/*   Updated: 2023/02/23 11:40:48 by deryacar         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	res;

	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
	{
		res = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (res);
	}
	else
		return (-1);
}
