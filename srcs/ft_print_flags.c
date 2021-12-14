/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 23:30:39 by lfrederi          #+#    #+#             */
/*   Updated: 2021/12/14 15:33:06 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "../headers/ft_putnbrstr.h"
#include "../headers/ft_utils.h"

int	ft_print_x(va_list *ap, t_args *arg)
{
	unsigned int	n;
	int				sharp_flag;

	sharp_flag = 0;
	n = va_arg(*ap, unsigned int);
	if (arg->sharp_flag && n)
	{
		write(1, "0x", 2);
		sharp_flag = 2;
	}
	ft_putnbr_x(n);
	return (ft_countdigit_ux(n, 16) + sharp_flag);
}

int	ft_print_xx(va_list *ap, t_args *arg)
{
	unsigned int	n;
	int				sharp_flag;

	sharp_flag = 0;
	n = va_arg(*ap, unsigned int);
	if (arg->sharp_flag && n)
	{
		write(1, "0X", 2);
		sharp_flag = 2;
	}
	ft_putnbr_xx(n);
	return (ft_countdigit_ux(n, 16) + sharp_flag);
}

int	ft_print_u(va_list *ap, t_args *arg)
{
	unsigned int	n;
	(void) arg;
	n = va_arg(*ap, unsigned int);
	ft_putnbr_u(n);
	return (ft_countdigit_ux(n, 10));
}

int	ft_print_p(va_list *ap, t_args *arg)
{
	unsigned long	p;
	(void) arg;
	p = va_arg(*ap, unsigned long);
	write(1, "0x", 2);
	ft_putnbr_lux(p);
	return (ft_countdigit_p(p) + 2);
}

int	ft_print_d(va_list *ap, t_args *arg)
{
	int	n;
	int	len;
	int	tmp;
	int	z;

	n = va_arg(*ap, int);
	len = ft_countdigit_d(n);
	tmp = len;
	z = 0;
	if (!n && !arg->minus_flag)
		return (0);
	if ((arg->dot_flag - tmp) > 0)
		z = arg->dot_flag - tmp;
	if (arg->digit_padding)
		len += ft_putblank(arg->digit_padding - arg->sign_flag - tmp - z);
	if (n < 0)
	{
		ft_putchar('-');
		len++;
	}
	if ((arg->blank_flag || arg->sign_flag) && (n >= 0))
		len++;
	if (len && (arg->sign_flag) && (n >= 0))
		ft_putchar('+');
	else if (len && (arg->blank_flag) && (n >= 0))
		ft_putchar(' ');
	if ((arg->dot_flag) && ((arg->dot_flag - tmp) > 0))
		len += ft_putzero(arg->dot_flag - tmp);
	if ((arg->zero_padding) && ((arg->digit_padding - len) > 0))
		len += ft_putzero(arg->digit_padding - len);
	ft_putnbr_d(n);
	if ((arg->minus_flag))
		 len += ft_putblank(arg->minus_flag - len);
	return (len);
}
