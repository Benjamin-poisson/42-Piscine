/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:34:47 by bepoisso          #+#    #+#             */
/*   Updated: 2024/07/25 11:00:26 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_sqrt(int nb)
{
	int	index;

	index = 0;
	while (index * index < nb)
		index++;
	return (index + 1);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	j;
	int	max;

	i = 2;
	max = is_sqrt(nb);
	if (nb <= 1)
		return (0);
	while (i <= max)
	{
		j = 2;
		while (i * j < nb)
			j++;
		if (i * j == nb)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!(ft_is_prime(nb)))
		nb++;
	return (nb);
}

// #include <stdio.h>
// int main()
// {
// 	printf("ft_find_next_prime(12) expected : 13, got %d\n",
//ft_find_next_prime(12));
// 	printf("ft_find_next_prime(15) expected : 17, got %d\n",
//ft_find_next_prime(15));
// 	printf("ft_find_next_prime(18) expected : 19, got %d\n",
//ft_find_next_prime(18));
// 	return 0;
// }
