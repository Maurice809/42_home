/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:35:26 by Maurice809        #+#    #+#             */
/*   Updated: 2022/04/29 11:50:58 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int argc, char *argv[])
{
	if (argv[1] != '-help' || argv[1] != '-h')
		ft_check(argv[1]);
	else
		ft_error(argc, argv[1], argv[2]);
	return(0);
}
