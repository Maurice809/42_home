/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:50:25 by Maurice809        #+#    #+#             */
/*   Updated: 2022/04/13 03:23:56 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>

int		ft_printf(const char *input, ...);
int		ft_putchar(char c, int *count);
int		ft_putnbr(long nbr, int *count, int base, char input);
int		ft_putptr(unsigned long nbr, int *count);
void	ft_args(va_list args, char input, int *count);
int		ft_putstr(char *str, int *count);
int		ft_nbr(long nbr, int base, char input, int *count);

#endif
