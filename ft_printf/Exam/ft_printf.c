/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 23:41:06 by Maurice809        #+#    #+#             */
/*   Updated: 2022/04/20 02:03:22 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

void	ft_putchar(char c, int *count)
{
	*count += write(1, &c, 1);
}

void	ft_putstr(char *str, int *count)
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

void	ft_putnbr(long nbr, int *count, int base)
{
	if (nbr < 0)
	{
		ft_putchar('-', count);
		nbr *= -1;
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

void	ft_args(va_list args, char input, int *count)
{
	if (input == '%')
		ft_putchar('%', count);
	else if (input == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (input == 'd')
		ft_putnbr((int)va_arg(args, int), count, 10);
	else if (input == 'x')
		ft_putnbr((unsigned int)va_arg(args, int), count, 16);
}

int	ft_printf(const char *input, ...)
{
	int		count;
	va_list	args;

	count = 0;
	va_start (args, input);
	while (*input)
	{
		if (*input != '%')
			ft_putchar(*input, &count);
		else
			ft_args(args, *++input, &count);
		input++;
	}
	va_end (args);
	return (count);
}

/*
void	ft_hello(void)
{
	ft_printf("\n");
	printf("-%d\n", printf("Hello World!\n"));
	ft_printf("-%d\n", ft_printf("Hello World!\n"));
	ft_printf("\n");
	printf("-%d\n", printf("s |---| %s \n", "BNK"));
	ft_printf("-%d\n", ft_printf("s |---| %s \n", "BNK"));
	ft_printf("\n");
}

void	ft_decimal(int a)
{
	printf("-%d\n", printf("d |---| %d\n", a));
	ft_printf("-%d\n", ft_printf("d |---| %d\n", a));
	ft_printf("\n");
}

void	ft_xx(int a)
{
	printf("-%d\n", printf("x |---| %x\n", a));
	ft_printf("-%d\n", ft_printf("x |---| %x\n", a));
	ft_printf("\n");
	printf("-%d\n", printf("%% \n"));
	ft_printf("-%d\n", ft_printf("%% \n"));
	ft_printf("\n");
}

int	main(void)
{
	int	a;

	a = 48;
	ft_hello();
	ft_decimal(a);
	ft_xx(a);
	a = -2147483648;
    ft_hello();
    ft_decimal(a);
    ft_xx(a);
	return (0);
}
*/
