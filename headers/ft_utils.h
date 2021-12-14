/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:12:01 by lfrederi          #+#    #+#             */
/*   Updated: 2021/12/14 09:17:43 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_UTILS_H
#define FT_UTILS_H

#include <stdarg.h>

typedef struct s_args
{
	char	format;
	int		sharp_flag;
	int		sign_flag;
	int		blank_flag;
	int		digit_padding;
	int		zero_padding;
	int		minus_flag;
	int		dot_flag;
}	t_args;

typedef struct s_putflag
{
	char	flag;
	int		(*f_specifer)(va_list *ap, t_args *arg);	
}	t_putflag;

void	ft_fill_array(t_putflag flags[9]);
int		ft_getindex(t_putflag flags[9], char c);
int		ft_countdigit_p(unsigned long nbr);
int		ft_countdigit_ux(unsigned int nbr, int lenbase);
int		ft_countdigit_d(int nbr);

#endif
