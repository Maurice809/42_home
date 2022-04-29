/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:40:55 by Maurice809        #+#    #+#             */
/*   Updated: 2022/04/29 21:11:06 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>
# include <stdio.h>
# include <sys/types.h>
# include <signal.h>

void	ft_putchar(char c, int *count);
void	ft_putstr(char *str, int *count);
void	ft_putnbr(long nbr, int *count, int base);
void	ft_args(va_list args, char convert, int *count);
int		ft_printf(const char *input, ...);

int		ft_atoi(const char *str);
int		ft_str_isnum(char *str);

void	sender(pid_t pid, char *str);
void	sighandler(int signum);
#endif
