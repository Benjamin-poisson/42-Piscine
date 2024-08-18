/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:40:24 by bepoisso          #+#    #+#             */
/*   Updated: 2024/07/17 16:44:18 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_current(int first, int second)
{
	int	div;
	int	mod;

	div = (first / 10) + '0';
	mod = (first % 10) + '0';
	write(1, &div, 1);
	write(1, &mod, 1);
	write(1, " ", 1);
	div = (second / 10) + '0';
	mod = (second % 10) + '0';
	write(1, &div, 1);
	write(1, &mod, 1);
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			print_current(first, second);
			if (first != 98)
				write(1, ", ", 2);
			second++;
		}
		first++;
	}
}
