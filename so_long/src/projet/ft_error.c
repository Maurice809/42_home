/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:54:19 by Maurice809        #+#    #+#             */
/*   Updated: 2022/09/10 21:53:37 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_error(int nbr)
{
	if (nbr == 0)
	{
		ft_printf("\n");
		ft_printf("Error : no argument or wrong file name\n");
	}
	if (nbr == 1)
	{
		ft_printf("\n");
		ft_printf("Error : your map contains one or more errors\n");
	}
	ft_printf("\n");
	ft_printf("More information : so_long game.ber\n");
	ft_printf("\n");
	exit (1);
}
