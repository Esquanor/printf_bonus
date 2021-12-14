/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 09:38:29 by lfrederi          #+#    #+#             */
/*   Updated: 2021/12/14 15:26:44 by lfrederi         ###   ########.fr       */
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
	{
		ft_putchar('%');
		return (1);
	}
	else
	{
		ft_putchar(c);
		return (1);
	}
}

int	ft_isformat(char c)
{
	int			i;
	const char	*format;

	format = "cspdiuxX";
	i = 0;
	while (format[i])
	{
		if (format[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int ft_isdigit(char c)
{
	const char	*digit;
	int			i;

	digit = "1234567890";
	i = 0;
	while (digit[i])
	{
		if (digit[i] == c)
			return (1);
		i++;
	}
	return (0);

}

int	ft_isflags(char c)
{
	int			i;
	const char	*flags;

	flags = "0123456789+-.# ";
	i = 0;
	while (flags[i])
	{
		if (flags[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void ft_init_t_args(t_args *arg)
{
	arg->format = 0;
	arg->sharp_flag = 0;
	arg->sign_flag = 0;
	arg->blank_flag = 0;
	arg->digit_padding = 0;
	arg->zero_padding = 0;
	arg->minus_flag = -1;
	arg->dot_flag = -1;
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
	while (s[++i])
	{
		if (s[i] == '%')
		{
			while (!ft_isformat(s[++i]) && ft_isflags(s[i]))
			{
				if (s[i] == '#')
				{
					arg.sharp_flag = 1;
					i++;
				}
				if (s[i] == '+')
				{
					arg.sign_flag = 1;
					i++;
				}
				if (s[i] == ' ')
				{
					arg.blank_flag = 1;
					i++;
				}
				if (s[i] == '0')
				{
					arg.zero_padding = 1;
					i++;
				}
				if (s[i] == '-')
				{
					arg.minus_flag = 0;
					while (ft_isdigit(s[++i]))
						arg.minus_flag = arg.minus_flag * 10 + (s[i] - '0');
				}
				if (s[i] == '.')
				{
					arg.dot_flag = 0;
					while (ft_isdigit(s[++i]))
						arg.dot_flag = arg.dot_flag * 10 + (s[i] - '0');
				}
				if (ft_isdigit(s[i]) && (s[i] - '0'))
				{
					arg.digit_padding = 0;
					while (ft_isdigit(s[i]))
					{
						arg.digit_padding = arg.digit_padding * 10 + (s[i] - '0');
						i++;
					}
				}
				i--;
			}
			if (s[i])
				arg.format = s[i];
			ret += ft_printargs(&arg, &ap, f);
			ft_init_t_args(&arg);
			continue;
		}
		ft_putchar(s[i]);
		ret++;
	}
	va_end(ap);
	return (ret);
}
