/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:14:03 by bepoisso          #+#    #+#             */
/*   Updated: 2024/07/17 19:00:41 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	print_tab(int *tab, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		putchar(tab[i] + '0');
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	tab[9];
	int	i;

	i = 0;
	while (i <= n)
	{
		tab[i] = i;
		i++;
	}
	i = 0;
}
