/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 09:38:29 by lfrederi          #+#    #+#             */
/*   Updated: 2021/12/16 17:38:24 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "../headers/ft_print_flags_bonus.h"
#include "../headers/ft_putnbrstr_bonus.h"
#include "../headers/ft_utils_bonus.h"

static int	ft_printargs(t_args *arg, va_list *ap, t_putflag *f)
{
	char	c;

	c = arg->format;
	if ((c == 'p') || (c == 'd') || (c == 'i') || (c == 'u')
		|| (c == 'x') || (c == 'X') || (c == 'c') || (c == 's'))
		return (f[ft_getindex(f, c)].f_specifer(ap, arg));
	else
		return (ft_print_percent(arg));
}

static int	ft_increment_flag(char c, t_args *arg)
{
	const char	*f;

	f = "#+0 ";
	if (c == '#')
		arg->sharp_flag = 1;
	if (c == '+')
		arg->sign_flag = 1;
	if (c == ' ')
		arg->blank_flag = 1;
	if (c == '0')
		arg->zero_flag = 1;
	while (*f)
	{
		if (*f == c)
			return (1);
		f++;
	}
	return (0);
}

static int	ft_isflag(int i, const char *s, t_args *arg)
{
	i += ft_increment_flag(s[i], arg);
	if (s[i] == '-')
	{
		if ((arg->minus_flag == -1) ||
				((arg->minus_flag > -1) && (ft_isdigit(s[i+1]))))
			arg->minus_flag = 0;
		while (ft_isdigit(s[++i]))
			arg->minus_flag = arg->minus_flag * 10 + (s[i] - '0');
	}
	if (s[i] == '.')
	{
		arg->dot_flag = 0;
		while (ft_isdigit(s[++i]))
			arg->dot_flag = arg->dot_flag * 10 + (s[i] - '0');
	}
	if (ft_isdigit(s[i]) && (s[i] - '0'))
		while (ft_isdigit(s[i]))
			arg->digit_padding = arg->digit_padding * 10 + (s[i++] - '0');
	return (i - 1);
}

static int	ft_formatting(const char *s, va_list *ap, t_putflag *f, t_args *arg)
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
			if (!s[i])
				return (ret);
			arg->format = s[i];
			ret += ft_printargs(arg, ap, f);
			ft_init_t_args(arg);
			continue ;
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

	if (!s)
		return (-1);
	ft_fill_array(f);
	ft_init_t_args(&arg);
	va_start(ap, s);
	i = -1;
	ret = 0;
	ret = ft_formatting(s, &ap, f, &arg);
	va_end(ap);
	return (ret);
}