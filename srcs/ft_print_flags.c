/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 23:30:39 by lfrederi          #+#    #+#             */
/*   Updated: 2021/12/18 12:07:55 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../headers/ft_putnbrstr.h"
#include "../headers/ft_utils.h"

int	ft_print_x(va_list *ap)
{
	unsigned int	n;

	n = va_arg(*ap, unsigned int);
	ft_putnbr_x(n, 0);
	return (ft_countdigit_ux(n, 16));
}

int	ft_print_xx(va_list *ap)
{
	unsigned int	n;

	n = va_arg(*ap, unsigned int);
	ft_putnbr_x(n, 1);
	return (ft_countdigit_ux(n, 16));
}

int	ft_print_u(va_list *ap)
{
	unsigned int	n;

	n = va_arg(*ap, unsigned int);
	ft_putnbr_u(n);
	return (ft_countdigit_ux(n, 10));
}

int	ft_print_p(va_list *ap)
{
	unsigned long	p;

	p = va_arg(*ap, unsigned long);
	write(1, "0x", 2);
	ft_putnbr_lux(p);
	return (ft_countdigit_p(p) + 2);
}

int	ft_print_di(va_list *ap)
{
	int	n;

	n = va_arg(*ap, int);
	ft_putnbr_di(n);
	return (ft_countdigit_di(n));
}
