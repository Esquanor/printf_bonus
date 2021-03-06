/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 23:18:26 by lfrederi          #+#    #+#             */
/*   Updated: 2021/12/15 22:52:37 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putstr(const char *s, int size)
{
	if (s)
	{
		write(1, s, size);
		return (size);
	}
	else
	{
		write(1, "(null)", 6);
		return (6);
	}
}

int	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
