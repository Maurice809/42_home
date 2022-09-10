/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:43:34 by Maurice809        #+#    #+#             */
/*   Updated: 2022/06/16 20:48:13 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(long nbr, int *count, int base, char input)
{
	if (nbr == -2147483648)
	{
		ft_putstr("-2147483648", count);
		return (*count);
	}
	if (nbr < 0)
	{
		ft_putchar('-', count);
		nbr *= -1;
	}
	if (nbr >= base)
	{
		ft_putnbr(nbr / base, count, base, input);
		ft_putnbr(nbr % base, count, base, input);
	}
	else
	{
		ft_nbr(nbr, base, input, count);
	}
	return (*count);
}

int	ft_nbr(long nbr, int base, char input, int *count)
{
	if (nbr < 10 || base == 10)
		nbr += 48;
	else if (input == 'x')
		nbr += 87;
	else if (input == 'X')
		nbr += 55;
	ft_putchar(nbr, count);
	return (*count);
}
