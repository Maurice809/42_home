/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:35:26 by Maurice809        #+#    #+#             */
/*   Updated: 2022/05/03 13:48:55 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int ft_error(void)
{
	ft_printf("Error\nUse : ./so_long ./example_map.ber\n");
	return (0);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
		return (ft_error());
	if (ft_check(argv[1]))
	{
		ft_printf("game");
	}
	else
		ft_printf("Error\n");
	return(1);
}
