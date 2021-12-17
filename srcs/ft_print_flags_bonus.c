/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_flags_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 23:30:39 by lfrederi          #+#    #+#             */
/*   Updated: 2021/12/16 18:37:47 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../headers/ft_putnbrstr_bonus.h"
#include "../headers/ft_utils_bonus.h"

int	ft_print_x(va_list *ap, t_args *arg)
{
	unsigned int	n;
	int				len;
	int				tmp;

	n = va_arg(*ap, unsigned int);
	if (!n && !arg->dot_flag)
		return (0);
	if ((arg->dot_flag >= 0) && (arg->zero_flag == 1))
		arg->zero_flag = 0;
	len = ft_countdigit_ux(n, 16);
	tmp = len;
	len += ft_padding_blank(arg, n, len);
	if (arg->sharp_flag && n)
	{
		write(1, "0x", 2);
		len += 2;
	}
	len += ft_putzero_dotflag(arg, tmp) + ft_putzero_zeroflag(arg, len);
	ft_putnbr_x(n);
	len += ft_left_adjustment(arg, len);
	return (len);
}

int	ft_print_xx(va_list *ap, t_args *arg)
{
	unsigned int	n;
	int				len;
	int				tmp;

	n = va_arg(*ap, unsigned int);
	if (!n && !arg->dot_flag)
		return (0);
	if ((arg->dot_flag >= 0) && (arg->zero_flag == 1))
		arg->zero_flag = 0;
	len = ft_countdigit_ux(n, 16);
	tmp = len;
	len += ft_padding_blank(arg, n, len);
	if (arg->sharp_flag && n)
	{
		write(1, "0X", 2);
		len += 2;
	}
	len += ft_putzero_dotflag(arg, tmp) + ft_putzero_zeroflag(arg, len);
	ft_putnbr_xx(n);
	len += ft_left_adjustment(arg, len);
	return (len);
}

int	ft_print_u(va_list *ap, t_args *arg)
{
	unsigned int	n;
	int				len;
	int				tmp;

	n = va_arg(*ap, unsigned int);
	if (!n && !arg->dot_flag)
		return (0);
	if ((arg->dot_flag >= 0) && (arg->zero_flag == 1))
		arg->zero_flag = 0;
	len = ft_countdigit_ux(n, 10);
	tmp = len;
	len += ft_padding_blank(arg, n, len);
	len += ft_putzero_dotflag(arg, tmp) + ft_putzero_zeroflag(arg, len);
	ft_putnbr_u(n);
	len += ft_left_adjustment(arg, len);
	return (len);
}

int	ft_print_p(va_list *ap, t_args *arg)
{
	unsigned long	p;
	int				len;
	int				tmp;

	p = va_arg(*ap, unsigned long);
	if ((arg->dot_flag >= 0) && (arg->zero_flag == 1))
		arg->zero_flag = 0;
	if (!p && !arg->dot_flag)
		len = 2;
	else
		len = ft_countdigit_p(p) + 2;
	tmp = len - 2;
	len += ft_padding_blank(arg, 0, len);
	write(1, "0x", 2);
	len += ft_putzero_dotflag(arg, tmp) + ft_putzero_zeroflag(arg, len);
	if (!(!p && !arg->dot_flag))
		ft_putnbr_lux(p);
	len += ft_left_adjustment(arg, len);
	return (len);
}

int	ft_print_di(va_list *ap, t_args *arg)
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
	if ((arg->dot_flag >= 0) && (arg->zero_flag == 1))
		arg->zero_flag = 0;
	len += ft_padding_blank(arg, n, len);
	if (n < 0)
		len += ft_putchar('-');
	if (len && (arg->sign_flag) && (n >= 0))
		len += ft_putchar('+');
	else if (len && (arg->blank_flag) && (n >= 0))
		len += ft_putchar(' ');
	len += (ft_putzero_dotflag(arg, tmp) + ft_putzero_zeroflag(arg, len));
	ft_putnbr_d(n);
	len += ft_left_adjustment(arg, len);
	return (len);
}
