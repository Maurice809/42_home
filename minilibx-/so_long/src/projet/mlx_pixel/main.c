/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 09:17:34 by Maurice809        #+#    #+#             */
/*   Updated: 2022/04/19 12:48:36 by mort0707         ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "mlx.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int	main(void)
{
	long		i;
	void	*mlx;
	void	*mlx_win;
	int x;
	int y;

	i = -1;
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 640, 480, "Relax !");
	while (1)
	{
		while (++i < 48)
		{
			x = rand() % (640 + 1 - 0) + 0;
			y = rand() % (480 + 1 - 0) + 0;
			mlx_pixel_put(mlx, mlx_win, x, y, 0xFFFFFF);
			sleep(1 / 1.5);
		}
		i = -1;
		while (++i < 3000)
		{
			x = rand() % (640 + 1 - 0) + 0;
			y = rand() % (480 + 1 - 0) + 0;
			mlx_pixel_put(mlx, mlx_win, x, y, 0x000000);
			sleep(1 / 10);
		}
		i = -1;
	}
//	mlx_loop(mlx);
}
