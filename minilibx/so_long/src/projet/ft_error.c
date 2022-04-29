/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:54:19 by Maurice809        #+#    #+#             */
/*   Updated: 2022/04/29 11:28:08 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int ft_error(int nbr, char *s1, char *s2)
{
	if (nbr == 0)
		printf("\n");
		printf("Error : no argument\n");
		printf("More information : so_long -help\n");
		s1 = 0;
		s2 = 0;
	return(0) ;
}
