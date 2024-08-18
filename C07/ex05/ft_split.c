/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:18:27 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/04 18:35:08 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_separator(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strcpy(char *dest, char *src, int start, int end)
{
	int	i;

	i = 0;
	while (src[start] && start <= end)
	{
		dest[i] = src[start];
		start++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	word_count(char *str, char *sep)
{
	int	i;
	int	count;
	int	check;

	i = 0;
	count = 0;
	check = 0;
	while (str[i])
	{
		if (is_separator(str[i], sep))
			check = 0;
		else if (check == 0)
		{
			check = 1;
			count++;
		}
		i++;
	}
	return (count);
}

int	get_next_sep(int index, char *str, char *sep)
{
	int	i;

	i = 0;
	while (is_separator(str[index], sep))
		index++;
	while (str[index])
	{
		if (is_separator(str[index], sep))
			return (index);
		index++;
	}
	return (index);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**dest;

	i = 0;
	j = 0;
	dest = NULL;
	dest = (char **)malloc(sizeof(char *) * word_count(str, charset) + 1);
	if (dest == NULL)
		return (dest);
	while (i < word_count(str, charset))
	{
		while (is_separator(str[j], charset))
			j++;
		dest[i] = malloc(sizeof(char) * get_next_sep(j, str, charset) - j);
		ft_strcpy(dest[i], str, j, get_next_sep(j, str, charset) - 1);
		j = get_next_sep(j, str, charset);
		i++;
	}
	dest[i] = 0;
	return (dest);
}

/* #include <stdio.h>
int	main(void)
{
	printf("___TEST1___\n");
	char **dest;
	int	i = 0;
	char str[] = "Bonjour je|suis,un|chat";
	char charset[] = " ,|";
	dest = ft_split(str, charset);
	while (dest[i] != 0)
	{
		printf("%s\n", dest[i]);
		i++;
	}
	printf("\n___TEST2___\n");
	char **dest2;
	int	i2 = 0;
	char str2[] = "Bonjour ,|| , je|,,, suis,,,,,un|||||,chat";
	char charset2[] = " ,|";
	dest2 = ft_split(str2, charset2);
	while (dest2[i2] != 0)
	{
		printf("%s\n", dest2[i2]);
		i2++;
	}
	printf("\n___TEST3___\n");
	char **dest3;
	int	i3 = 0;
	char str3[] = ", |, |Bonjour| ,|, ";
	char charset3[] = " ,|";
	dest3 = ft_split(str3, charset3);
	while (dest3[i3] != 0)
	{
		printf("%s\n", dest3[i3]);
		i3++;
	}
		printf("\n___TEST4___\n");
	char **dest4;
	int	i4 = 0;
	char str4[] = ",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,";
	char charset4[] = " ,|";
	dest4 = ft_split(str4, charset4);
	while (dest4[i4] != 0)
	{
		printf("%s\n", dest4[i4]);
		i4++;
	}
} */
