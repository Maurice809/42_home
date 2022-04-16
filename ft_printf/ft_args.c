/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:54:32 by tmoret            #+#    #+#             */
/*   Updated: 2022/04/13 02:15:10 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_args(va_list args, char input, int *count)
{
	if (input == '%')
		ft_putchar('%', count);
	else if (input == 'c')
		ft_putchar((char)va_arg(args, int), count);
	else if (input == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (input == 'p')
	{
		ft_putstr("0x", count);
		ft_putptr(va_arg(args, unsigned long), count);
	}
	else if (input == 'd')
		ft_putnbr(va_arg(args, int), count, 10, input);
	else if (input == 'i')
		ft_putnbr(va_arg(args, int), count, 10, input);
	else if (input == 'u')
		ft_putnbr(va_arg(args, unsigned int), count, 10, input);
	else if (input == 'x')
		ft_putnbr(va_arg(args, unsigned int), count, 16, input);
	else if (input == 'X')
		ft_putnbr(va_arg(args, unsigned int), count, 16, input);
}
