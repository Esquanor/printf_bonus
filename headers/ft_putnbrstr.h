/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrstr.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrederi <lfrederi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:03:27 by lfrederi          #+#    #+#             */
/*   Updated: 2021/12/14 10:53:47 by lfrederi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUTNBRSTR_H
# define FT_PUTNBRSTR_H

void	ft_putnbr_x(unsigned int nbr);
void	ft_putnbr_xx(unsigned int nbr);
void	ft_putnbr_u(unsigned int nbr);
void	ft_putnbr_lux(unsigned long p);
void	ft_putnbr_d(int nbr);
int		ft_putstr(const char *s, int size);
void	ft_putchar(char c);
int		ft_putzero(int n);
int		ft_putblank(int n);
int		ft_strlen(const char *s);

#endif
