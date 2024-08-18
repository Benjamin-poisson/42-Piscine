/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:16:02 by bepoisso          #+#    #+#             */
/*   Updated: 2024/07/29 12:41:22 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*tab;

	i = 0;
	size = max - min;
	tab = NULL;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (size < 0)
		size = -size;
	tab = malloc(sizeof(int) * size);
	if (tab == NULL)
		return (-1);
	while (i < size)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (i);
}
// #include <stdio.h>
// int main(void)
// {
// 	int min = -20;
// 	int max = -10;
// 	int *tab[1];
// 	int size = max - min;
// 	int res = 0;

// 	if (size < 0)
// 		size = -size;
// 	res = ft_ultimate_range(tab, min, max);
// 	printf("Value return = %d\n", res);
// 	return 0;
// }
