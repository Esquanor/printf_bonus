/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 23:30:39 by lfrederi          #+#    #+#             */
/*   Updated: 2021/12/14 19:47:24 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "../headers/ft_putnbrstr.h"
#include "../headers/ft_utils.h"

int	ft_padding_blank(t_args *arg, long n, int size)
{
	int	z;

	z = 0;
	if ((arg->dot_flag - size) > 0)
		z = arg->dot_flag - size;
	if (arg->digit_padding && !arg->zero_padding && (n >= 0))
		return (ft_putblank(arg->digit_padding - arg->sign_flag - size - z));
	else if (arg->digit_padding && !arg->zero_padding && (n < 0))
		return (ft_putblank(arg->digit_padding - arg->sign_flag - size - z - 1));
	return (0);
}

int	ft_left_adjustment(t_args *arg, int len)
{
	if ((arg->minus_flag))
		 return (ft_putblank(arg->minus_flag - len));
	return (0);
}


int	ft_print_x(va_list *ap, t_args *arg)
{
	unsigned int	n;
	int				sharp_flag;
	int				len;

	sharp_flag = 0;
	n = va_arg(*ap, unsigned int);
	len = ft_countdigit_ux(n, 16);
	len += ft_padding_blank(arg, n, len);
	if (arg->sharp_flag && n)
	{
		write(1, "0x", 2);
		sharp_flag = 2;
	}
	ft_putnbr_x(n);
	len += ft_left_adjustment(arg, len);
	return (len + sharp_flag);
}

int	ft_print_xx(va_list *ap, t_args *arg)
{
	unsigned int	n;
	int				len;
	int				sharp_flag;

	sharp_flag = 0;
	n = va_arg(*ap, unsigned int);
	len = ft_countdigit_ux(n, 16);
	len += ft_padding_blank(arg, n, len);
	if (arg->sharp_flag && n)
	{
		write(1, "0X", 2);
		sharp_flag = 2;
	}
	ft_putnbr_xx(n);
	len += ft_left_adjustment(arg, len);
	return (len + sharp_flag);
}

int	ft_print_u(va_list *ap, t_args *arg)
{
	unsigned int	n;
	int				len;

	n = va_arg(*ap, unsigned int);
	len = ft_countdigit_ux(n, 10);
	len += ft_padding_blank(arg, n, len);
	ft_putnbr_u(n);
	len += ft_left_adjustment(arg, len);
	return (len);
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
	if (!n && !arg->dot_flag)
		return (0);
	len += ft_padding_blank(arg, n, len);
	if (n < 0)
		ft_putchar('-');
	if (((arg->blank_flag || arg->sign_flag) && (n >= 0)) || (n < 0))
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
	len += ft_left_adjustment(arg, len);
	return (len);
}

