/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:49:49 by Maurice809        #+#    #+#             */
/*   Updated: 2022/04/26 14:21:39 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_inter(char *s1, char *s2)
{
	int alpha[256] = {0};

	while (*s2)
	{
		if (alpha[(int)*s2] == 0)
			alpha[(int)*s2]++;
		s2++;
	}
	while (*s1)
	{
		if (alpha[(int)*s1] == 1)
		{
			alpha[(int)*s1]++;
			write (1, &*s1, 1);
		}
		s1++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_inter(argv[1], argv[2]);
	write(1,"\n",1);
	return (0);
}
