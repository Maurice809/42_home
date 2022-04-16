/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:43:34 by tmoret            #+#    #+#             */
/*   Updated: 2022/04/13 02:21:32 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long nbr, int *count)
{
	if (nbr >= 16)
	{
		ft_putptr(nbr / 16, count);
		ft_putptr(nbr % 16, count);
	}
	else
	{
		if (nbr < 10 )
			nbr += 48;
		else
			nbr += 87;
		ft_putchar(nbr, count);
	}
	return (*count);
}
