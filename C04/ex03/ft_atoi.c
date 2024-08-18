/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:26:45 by bepoisso          #+#    #+#             */
/*   Updated: 2024/07/23 17:46:41 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	result;

	result = 0;
	neg = 0;
	i = 0;
	while (*str == '\n' || *str == '\t' || *str == '\v'
		|| *str == '\r' || *str == '\f' || *str == ' ')
		str++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	if (neg % 2)
		return (-result);
	return (result);
}
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_atoi("42"));
// 	printf("%d\n", ft_atoi("-42"));
// 	return (0);
// }
