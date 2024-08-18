/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 12:15:03 by bepoisso          #+#    #+#             */
/*   Updated: 2024/07/31 14:09:36 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

static int	ft_abs(int value)
{
	if (value < 0)
		return (-value);
	else
		return (value);
}

# define ABS(Value) ft_abs(Value)

#endif
