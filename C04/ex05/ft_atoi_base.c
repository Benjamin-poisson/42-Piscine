/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 16:40:32 by bepoisso          #+#    #+#             */
/*   Updated: 2024/07/24 15:35:41 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_error(char *base)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = 0;
	while (base[size])
		size++;
	if (size < 2)
		return (1);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (1);
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_is_neg(char *str)
{
	int	neg;

	neg = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg++;
		str++;
	}
	return (neg % 2);
}

int	ft_inside_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	result;
	int	size;
	int	neg;

	neg = 0;
	result = 0;
	i = 0;
	size = 0;
	neg = ft_is_neg(str);
	while (base[size])
		size++;
	while (str[i] == ' ' || str[i] == '-' || str[i] == '+')
		i++;
	if (ft_check_error(base))
		return (0);
	while (ft_inside_base(str[i], base) != -1)
	{
		result = (result * size) + (ft_inside_base(str[i], base));
		i++;
	}
	if (neg)
		return (-result);
	return (result);
}
// #include <stdio.h>
// int main(void)
// {
// 	char *str1 = "1010";
// 	char *base1 = "01";
// 	printf("String: %s, Base: %s, Expected Result: 10, Actual Result: %d\n",
// str1, base1, ft_atoi_base(str1, base1));

// 	char *str2 = "7F";
// 	char *base2 = "0123456789ABCDEF";
// 	printf("String: %s, Base: %s, Expected Result: 127, Actual Result: %d\n",
// str2, base2, ft_atoi_base(str2, base2));

// 	char *str3 = "123";
// 	char *base3 = "0123456789";
// 	printf("String: %s, Base: %s, Expected Result: 123, Actual Result: %d\n",
// str3, base3, ft_atoi_base(str3, base3));

// 	char *str4 = "-7F";
// 	char *base4 = "0123456789ABCDEF";
// 	printf("String: %s, Base: %s, Expected Result: -127, Actual Result: %d\n",
// str4, base4, ft_atoi_base(str4, base4));

// 	char *str5 = "||";
// 	char *base5 = "0123456789|";
// 	printf("String: %s, Base: %s, Expected Result: 120, Actual Result: %d\n",
// str5, base5, ft_atoi_base(str5, base5));

// 	char *str6 = "  \\n -7F";
// 	char *base6 = "0123456789ABCDEF";
// 	printf("String: %s, Base: %s, Expected Result: -127, Actual Result: %d\n",
// str6, base6, ft_atoi_base(str6, base6));
// 	return 0;
// }
