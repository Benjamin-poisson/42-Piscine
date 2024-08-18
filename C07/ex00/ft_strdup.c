/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 18:20:18 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/05 11:12:55 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*dest;
	int		i;

	i = 0;
	size = ft_strlen(src);
	dest = NULL;
	dest = malloc(sizeof(char) * size);
	if (dest == NULL)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
// #include <stdio.h>
// int main()
// {
// 	char str[] = "Hi, i'm a long string and i expected myself";
// 	char *dest;
// 	dest = ft_strdup(str);
// 	printf("%s\n", dest);
// 	char str2[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQR";
// 	char *dest2;
// 	dest2 = ft_strdup(str2);
// 	printf("%s\n", dest2);
// 	char str3[] = " ";
// 	char *dest3;
// 	dest3 = ft_strdup(str3);
// 	printf("%s\n", dest3);
// }
