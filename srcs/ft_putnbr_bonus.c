/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 23:14:49 by lfrederi          #+#    #+#             */
/*   Updated: 2021/12/15 23:15:09 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_putnbrstr_bonus.h"

void	ft_putnbr_x(unsigned int nbr)
{
	const char		*base;
	unsigned int	n;

	base = "0123456789abcdef";
	n = nbr;
	if (n > 15)
		ft_putnbr_x(n / 16);
	ft_putchar(base[n % 16]);
}

void	ft_putnbr_xx(unsigned int nbr)
{
	const char		*base;
	unsigned int	n;

	base = "0123456789ABCDEF";
	n = nbr;
	if (n > 15)
		ft_putnbr_xx(n / 16);
	ft_putchar(base[n % 16]);
}

void	ft_putnbr_u(unsigned int nbr)
{
	if (nbr > 9)
		ft_putnbr_u(nbr / 10);
	ft_putchar((nbr % 10) + '0');
}

void	ft_putnbr_lux(unsigned long p)
{
	const char	*base;

	base = "0123456789abcdef";
	if (p > 15)
		ft_putnbr_lux(p / 16);
	ft_putchar(base[p % 16]);
}

void	ft_putnbr_d(int nbr)
{
	unsigned int	n;

	if (nbr < 0)
		n = -1 * nbr;
	else
		n = nbr;
	if (n > 9)
		ft_putnbr_d(n / 10);
	ft_putchar((n % 10) + '0');
}
