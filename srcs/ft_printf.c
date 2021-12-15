/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 09:38:29 by lfrederi          #+#    #+#             */
/*   Updated: 2021/12/15 17:37:24 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "../headers/ft_print_flags.h"
#include "../headers/ft_putnbrstr.h"
#include "../headers/ft_utils.h"

int	ft_printargs(t_args *arg, va_list *ap, t_putflag *f)
{
	char c;

	c = arg->format;
	if ((c == 'p') || (c == 'd') || (c == 'i') || (c == 'u')
		|| (c == 'x') || (c == 'X') || (c == 'c') || (c == 's'))
		return (f[ft_getindex(f, c)].f_specifer(ap, arg));
	else if (c == '%')
		ft_putchar('%');
	else
		ft_putchar(c);
	return (1);
}

int	ft_isflag(int i, const char *s, t_args *arg)
{
	if (s[i] == '#')
		arg->sharp_flag = 1;
	if (s[i] == '+')
		arg->sign_flag = 1;
	if (s[i] == ' ')
		arg->blank_flag = 1;
	if (s[i] == '0')
		arg->zero_flag = 1;
	i += ft_increment_flag(s[i]);
	if (s[i] == '-')
		arg->minus_flag = 0;
	if (s[i] == '.')
		arg->dot_flag = 0;
	if (s[i] == '-')
		while (ft_isdigit(s[++i]))
			arg->minus_flag = arg->minus_flag * 10 + (s[i] - '0');
	if (s[i] == '.')
		while (ft_isdigit(s[++i]))
			arg->dot_flag = arg->dot_flag * 10 + (s[i] - '0');
	if (ft_isdigit(s[i]) && (s[i] - '0'))
		while (ft_isdigit(s[i]))
			arg->digit_padding = arg->digit_padding * 10 + (s[i++] - '0');
	return (i - 1);
}

int	ft_print_formatting_string(const char *s, va_list *ap, t_putflag *f, t_args *arg)
{
	int	ret;
	int	i;

	ret = 0;
	i = -1;
	while (s[++i])
	{
		if (s[i] == '%')
		{
			while (!ft_isformat(s[++i]) && ft_isarguments(s[i]))
				i = ft_isflag(i, s, arg);
			if (s[i])
				arg->format = s[i];
			ret += ft_printargs(arg, ap, f);
			ft_init_t_args(arg);
			continue;
		}
		ft_putchar(s[i]);
		ret++;
	}
	return (ret);
}


int	ft_printf(const char *s, ...)
{
	va_list		ap;
	int			i;
	int			ret;
	t_putflag	f[9];
	t_args		arg;

	ft_fill_array(f);
	ft_init_t_args(&arg);
	va_start(ap, s);
	i = -1;
	ret = 0;
	ret = ft_print_formatting_string(s, &ap, f, &arg);
	va_end(ap);
	return (ret);
}
