/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:56:49 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/04 19:03:41 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_error(char *base);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base, char *str, int index)
{
	long int	nb;
	int			size_base;

	nb = nbr;
	size_base = ft_strlen(base);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb >= size_base)
		ft_putnbr_base(nb / size_base, base, str, index - 1);
	str[index] = base[nb % size_base];
}
