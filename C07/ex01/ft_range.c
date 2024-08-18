/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 14:40:57 by bepoisso          #+#    #+#             */
/*   Updated: 2024/07/29 12:40:26 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;
	int	size;

	i = 0;
	size = max - min;
	dest = NULL;
	if (min >= max)
		return (dest);
	if (size < 0)
		size = -size;
	dest = malloc(sizeof(int) * size);
	if (dest == NULL)
		return (dest);
	while (i < size)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// int main(void)
// {
// 	int min = -20;
// 	int max = -10;
// 	int *tab;
// 	int i = 0;
// 	int size = max - min;

// 	if (size < 0)
// 		size = -size;
// 	if ((tab = ft_range(min, max)) == NULL)
// 	{
// 		printf("MALLOC ERROR\n");
// 		return 1;
// 	}
// 	while(i < size)
// 	{
// 		printf("%d\n", tab[i]);
// 		i++;
// 	}
// 	return 0;
// }
