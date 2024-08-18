/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 22:09:55 by bepoisso          #+#    #+#             */
/*   Updated: 2024/07/25 12:32:54 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (nb == 0)
		return (0);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/* #include <stdio.h>
int main() {
	int tests[][3] = {
		{2, 3, 8},
		{5, 0, 1},
		{0, 0, 1},
		{2, -1, 0},
		{3, 4, 81},
		{0, 5, 0},
		{1, 10, 1},
		{2, 10, 1024},
		{-2, 3, -8},
		{-2, 2, 4}
	};

	int num_tests = sizeof(tests) / sizeof(tests[0]);

	for (int i = 0; i < num_tests; i++) {
		int result = ft_iterative_power(tests[i][0], tests[i][1]);
		printf("ft_iterative_power(%d, %d) = %d (Expected: %d) [%s]\n",
			   tests[i][0], tests[i][1], result, tests[i][2],
			   result == tests[i][2] ? "PASS" : "FAIL");
	}

	return 0;
}
 */
