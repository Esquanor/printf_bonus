/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 09:38:29 by lfrederi          #+#    #+#             */
/*   Updated: 2021/12/18 14:06:07 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "../headers/ft_print_flags.h"
#include "../headers/ft_putnbrstr.h"
#include "../headers/ft_utils.h"

static int	ft_printargs(char c, va_list *ap, t_putflag *f)
{
	if ((c == 'p') || (c == 'd') || (c == 'i') || (c == 'u')
		|| (c == 'x') || (c == 'X') || (c == 'c') || (c == 's'))
		return (f[ft_getindex(f, c)].f_specifer(ap));
	else if (c == '%')
		ft_putchar('%');
	else
		ft_putchar(c);
	return (1);
}

static int	ft_print_format(const char *s, va_list *ap, t_putflag *f)
{
	int	ret;
	int	i;

	ret = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			if (!s[i])
				return (ret);
			ret += ft_printargs(s[i], ap, f);
		}
		else
		{
			ft_putchar(s[i]);
			ret++;
		}
		i++;
	}
	return (ret);
}

int	ft_printf(const char *s, ...)
{
	va_list		ap;
	int			ret;
	t_putflag	f[9];

	if (!s)
		return (-1);
	ft_fill_array(f);
	va_start(ap, s);
	ret = 0;
	ret = ft_print_format(s, &ap, f);
	va_end(ap);
	return (ret);
}
