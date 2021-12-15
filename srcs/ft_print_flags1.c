/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_flags1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 23:30:39 by lfrederi          #+#    #+#             */
/*   Updated: 2021/12/15 12:16:33 by lfrederi         ###   ########.fr       */
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
	len += ft_left_adjustment(args, len);
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
	if ((args->dot_flag < len) && (args->dot_flag >= 0))
		len = args->dot_flag;
	tmp = len;
	len += ft_padding_blank(args, 0, len);
	ft_putstr(s, tmp);
	len += ft_left_adjustment(args, len);
	return (len);
}
