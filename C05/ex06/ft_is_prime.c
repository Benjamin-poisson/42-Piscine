/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:01:23 by bepoisso          #+#    #+#             */
/*   Updated: 2024/07/25 11:00:49 by bepoisso         ###   ########.fr       */
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

// #include <stdio.h>
// int main()
// {
// 	int i = -5;
// 	while(i < 200)
// 	{
// 		printf("%d = %d\n", i, ft_is_prime(i));
// 		i++;
// 	}
// }
