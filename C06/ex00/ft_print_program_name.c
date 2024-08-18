/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 21:53:11 by bepoisso          #+#    #+#             */
/*   Updated: 2024/07/25 18:11:17 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	argc = 0;
	while (argv[argc][i])
	{
		write(1, &argv[argc][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
