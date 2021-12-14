/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_flags1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 23:30:39 by lfrederi          #+#    #+#             */
/*   Updated: 2021/12/14 10:05:15 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_putnbrstr.h"
#include "../headers/ft_print_flags.h"
#include <stdarg.h>
#include <stdio.h>

int	ft_print_c(va_list *ap, t_args *args)
{
	int	len;

	len = 1;
	ft_putchar((char) va_arg(*ap, int));
	if (args->minus_flag - 1)
	{
		ft_putblank(args->minus_flag - 1);
		len += args->minus_flag - 1;
	}
	return (len);
}

int	ft_print_s(va_list *ap, t_args *args)
{
	int		len;
	int		tmp;
	char	*s;

	s = va_arg(*ap, char *);
	if (!s)
		return (ft_putstr(s, 0));
	len = ft_strlen(s);
	if ((args->dot_flag >= 0 ) && (args->dot_flag < len))
		len = args->dot_flag;
	tmp = len;
	if (args->digit_padding && args->minus_flag)
		args->digit_padding = 0;
	while (len < args->digit_padding)
	{
		ft_putchar(' ');
		len++;
	}
	ft_putstr(s, tmp);
	while (len < args->minus_flag)
	{
		ft_putchar(' ');
		len++;
	}
	return (len);
}
