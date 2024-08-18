/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:19:14 by bepoisso          #+#    #+#             */
/*   Updated: 2024/07/20 17:18:58 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_alphanum(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_str_is_lowercase(str[i]) && i == 0)
		{
			str[i] -= 32;
			i++;
		}
		if (ft_alphanum(str[i]))
		{
			if (ft_str_is_lowercase(str[i]) && ft_alphanum(str[i - 1]) == 0)
				str[i] -= 32;
			else if (ft_uppercase(str[i]) && ft_uppercase(str[i - 1]))
				str[i] += 32;
			else if (ft_uppercase(str[i]) && ft_alphanum(str[i - 1]))
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
// #include <stdio.h>

// int main()
// {
// 	char str[] = "a";
// 	printf("%s\n", str);
// 	ft_strcapitalize(str);
// 	printf("%s\n", str);
// }
