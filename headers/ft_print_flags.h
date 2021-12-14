/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_flags.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 13:38:21 by lfrederi          #+#    #+#             */
/*   Updated: 2021/12/12 21:38:33 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_FLAGS_H
# define FT_PRINT_FLAGS_H

#include <stdarg.h>
#include "../headers/ft_utils.h"

int	ft_print_x(va_list *ap, t_args *arg);
int	ft_print_xx(va_list *ap, t_args *arg);
int	ft_print_u(va_list *ap, t_args *arg);
int	ft_print_p(va_list *ap, t_args *arg);
int	ft_print_d(va_list *ap, t_args *arg);
int	ft_print_c(va_list *ap, t_args *arg);
int	ft_print_s(va_list *ap, t_args *arg);

#endif

