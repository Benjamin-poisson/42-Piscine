/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:15:03 by bepoisso          #+#    #+#             */
/*   Updated: 2024/07/24 15:31:58 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) <= 1)
		return (1);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = 0;
		while (j < i)
		{
			if (base[j] == base[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	nb;
	int			size_base;

	nb = nbr;
	size_base = ft_strlen(base);
	if (check_base(base))
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= size_base)
		ft_putnbr_base(nb / size_base, base);
	ft_putchar(base[nb % size_base]);
}

// int main(void)
// {
// 	ft_putnbr_base(42, "0123456789");
// 	ft_putchar('\n');
// 	ft_putnbr_base(42, "0123456789abcdef");
// 	ft_putchar('\n');
// 	ft_putnbr_base(42, "01");
// 	ft_putchar('\n');
// 	ft_putnbr_base(-42, "0123456789");
// 	ft_putchar('\n');
// }
