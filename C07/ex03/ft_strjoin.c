/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:41:56 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/04 18:57:17 by bepoisso         ###   ########.fr       */
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

int	ft_strslens(char **str, int size)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (j < size)
	{
		i = 0;
		while (str[j][i])
		{
			i++;
			count++;
		}
		j++;
	}
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_size;
	char	*str;
	int		i;

	if (size == 0)
	{
		str = malloc(sizeof(char));
		str[0] = '\0';
		return (str);
	}
	i = 0;
	total_size = ft_strslens(strs, size) + (ft_strlen(sep) * (size - 1) + 1);
	str = NULL;
	str = malloc(sizeof(char) * total_size);
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i != size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
/* #include <stdio.h>
int main(void)
{
	char *dest = NULL;
	char *strs[3] = {
		"Bonjour",
		"Je suis",
		"un peroquet"
	};
	char sep[] = ", ";
	dest = ft_strjoin(3 , strs, sep);
	if (dest == NULL)
	{
		printf("%s\nERROR\n", dest);
		return (1);
	}
	printf("%s\n", dest);
	return (0);
} */
