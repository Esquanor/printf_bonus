/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:53:53 by lfrederi          #+#    #+#             */
/*   Updated: 2021/12/15 15:15:29 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_print_flags.h"
#include "../headers/ft_putnbrstr.h"

int	ft_padding_blank(t_args *arg, long n, int size)
{
	int	z;

	z = 0;
	if ((arg->dot_flag - size) > 0)
		z = arg->dot_flag - size;
	if (arg->digit_padding && !arg->zero_flag && (n >= 0))
		return (ft_putblank(arg->digit_padding - arg->sign_flag - size - z));
	else if (arg->digit_padding && !arg->zero_flag && (n < 0))
		return (ft_putblank(arg->digit_padding - arg->sign_flag - size - z - 1));
	return (0);
}

int	ft_left_adjustment(t_args *arg, int len)
{
	if ((arg->minus_flag))
		 return (ft_putblank(arg->minus_flag - len));
	return (0);
}

int	ft_putzero_dotflag(t_args *arg, int len)
{
	if ((arg->dot_flag) && ((arg->dot_flag - len) > 0))
		return (ft_putzero(arg->dot_flag - len));
	return (0);
}

int	ft_putzero_zeroflag(t_args *arg, int len)
{
	if ((arg->zero_flag) && ((arg->digit_padding - len) > 0))
		return (ft_putzero(arg->digit_padding - len));
	return (0);
}
