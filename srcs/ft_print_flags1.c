/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_flags1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 23:30:39 by lfrederi          #+#    #+#             */
/*   Updated: 2021/12/15 23:01:01 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_putnbrstr.h"
#include "../headers/ft_print_flags.h"
#include <stdarg.h>

int	ft_print_c(va_list *ap)
{
	ft_putchar((char) va_arg(*ap, int));
	return (1);
}

int	ft_print_s(va_list *ap)
{
	int		len;
	char	*s;

	s = va_arg(*ap, char *);
	if (!s)
		return (ft_putstr(s, 0));
	len = ft_strlen(s);
	ft_putstr(s, len);
	return (len);
}
