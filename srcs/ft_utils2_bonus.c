/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 17:04:06 by lfrederi          #+#    #+#             */
/*   Updated: 2021/12/16 10:49:57 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_utils_bonus.h"

int	ft_getindex(t_putflag *flags, char c)
{
	int	i;

	i = 0;
	while (flags[i].f_specifer)
	{
		if (flags[i].flag == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_isformat(char c)
{
	int			i;
	const char	*format;

	format = "cspdiuxX%";
	i = 0;
	while (format[i])
	{
		if (format[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_isdigit(char c)
{
	const char	*digit;
	int			i;

	digit = "1234567890";
	i = 0;
	while (digit[i])
	{
		if (digit[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_isarguments(char c)
{
	int			i;
	const char	*arguments;

	arguments = "0123456789+-.# ";
	i = 0;
	while (arguments[i])
	{
		if (arguments[i] == c)
			return (1);
		i++;
	}
	return (0);
}
