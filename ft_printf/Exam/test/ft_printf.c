/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:54:51 by tmoret            #+#    #+#             */
/*   Updated: 2022/04/27 13:22:22 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <ft_printf.h>

void ft_putchar(char c, int *count)
{
	*count += write(1, &c, 1);
}

void ft_putstr(char *str, int *count)
{
	if (str == NULL)
	{
		ft_putstr("(null)", count);
		return ;
	}
	while (*str)
	{
		ft_putchar(*str, count);
		str++;
	}
}

void ft_putnbr(long nbr, int *count, int base)
{
	if (nbr < 0)
	{
		ft_putchar('-', count);
		nbr = - 1;
	}
	if (nbr >= base)
	{
		ft_putnbr(nbr / base, count, base);
		ft_putnbr(nbr % base, count, base);
	}
	else
	{
		if (nbr < 10 || base == 10)
			nbr += 48;
		else
			nbr += 87;
		ft_putchar(nbr, count);
	}
}

void ft_args(va_list args, char input, int *count)
{
	if (input == '%')
		ft_putchar('%', count);
	else if (input == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (input == 'd')
		ft_putnbr(va_arg(args, int), count, 10);
	else if (input == 'x')
		ft_putnbr((unsigned int)va_arg(args, int), count, 16);
}

int ft_printf(const char *input, ...)
{
	int count = 0;
	va_list args;

	va_start(args, input);
	while (*input)
	{
		if (*input != '%')
			ft_putchar(*input, &count);
		else
			ft_args(args, *++input, &count);
		input++;
	}
	va_end(args);
	return (count);
}
