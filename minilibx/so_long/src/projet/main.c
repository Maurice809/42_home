/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:35:26 by Maurice809        #+#    #+#             */
/*   Updated: 2022/04/30 23:45:14 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int argc, char *argv[])
{
	if (argc >2)
		printf("123");
	if ((char *)argv[1] == "-help")
//		ft_check(argv[1]);
		printf("help");
	else
		ft_error(argc, argv[1], argv[2]);
	return(0);
}
