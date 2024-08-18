/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:56:47 by bepoisso          #+#    #+#             */
/*   Updated: 2024/07/30 14:12:57 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putnbr_base(int nbr, char *base, char *str, int index);
int		ft_strlen(char *str);

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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		result;
	int		size_base;
	int		temp;
	char	*str;
	int		count;

	str = NULL;
	count = 0;
	size_base = ft_strlen(base_to);
	if (ft_check_error(base_from) || ft_check_error(base_to))
		return (NULL);
	result = ft_atoi_base(nbr, base_from);
	temp = result;
	while (temp != 0)
	{
		temp /= size_base;
		count++;
	}
	if (result < 0)
		count++;
	str = malloc((sizeof(char) * count) + 1);
	if (str == NULL)
		return (str);
	ft_putnbr_base(result, base_to, str, count - 1);
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *str;
// 	str = ft_convert_base("-1010110110011", "01", "0123456789abcdef");
// 	printf("%s\n", str);
// 	return (0);
// }
