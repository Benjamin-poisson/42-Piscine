/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 09:41:22 by bepoisso          #+#    #+#             */
/*   Updated: 2024/07/24 10:43:47 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index <= 1)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
// #include <stdio.h>
// int main(void)
// {
// 	int index;
// 	int expected;
// 	int got;

// 	int expected_values[11] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55};

// 	for (index = 0; index <= 10; index++)
// 	{
// 		got = ft_fibonacci(index);
// 		expected = expected_values[index];
// 		printf("index %d: expected %d, got %d\n", index, expected, got);
// 	}

// 	index = -1;
// 	got = ft_fibonacci(index);
// 	expected = -1;
// 	printf("index %d: expected %d, got %d\n", index, expected, got);

// 	return 0;
// }
