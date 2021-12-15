/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:26:44 by lfrederi          #+#    #+#             */
/*   Updated: 2021/12/15 09:52:34 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_utils.h"
#include "../headers/ft_print_flags.h"

void	ft_fill_array(t_putflag flags[9])
{
	const char	*f;
	int			(*f_specifer[9])(va_list *, t_args *arg);
	int			i;

	f = "pdiuxXcs";
	f_specifer[0] = &ft_print_p;
	f_specifer[1] = &ft_print_di;
	f_specifer[2] = &ft_print_di;
	f_specifer[3] = &ft_print_u;
	f_specifer[4] = &ft_print_x;
	f_specifer[5] = &ft_print_xx;
	f_specifer[6] = &ft_print_c;
	f_specifer[7] = &ft_print_s;
	i = 0;
	while (i < 8)
	{
		flags[i].flag = f[i];
		flags[i].f_specifer = f_specifer[i];
		i++;
	}
	flags[i].f_specifer = 0;
}

int	ft_getindex(t_putflag *flags, char c)
{
	int	i;

	i = 0;
	while (flags[i].f_specifer)
	{
		if (flags[i].flag == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_countdigit_p(unsigned long nbr)
{
	int	ret;

	if (!nbr)
		return (1);
	ret = 0;
	while (nbr != 0)
	{
		ret++;
		nbr = nbr / 16;
	}
	return (ret);
}

int	ft_countdigit_ux(unsigned int nbr, int lenbase)
{
	int	ret;

	if (!nbr)
		return (1);
	ret = 0;
	while (nbr != 0)
	{
		ret++;
		nbr = nbr / lenbase;
	}
	return (ret);
}

int	ft_countdigit_d(int nbr)
{
	int	ret;

	if (!nbr)
		return (1);
	ret = 0;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		ret++;
	}
	return (ret);
}
