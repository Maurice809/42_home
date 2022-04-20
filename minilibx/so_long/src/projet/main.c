/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 09:17:34 by Maurice809        #+#    #+#             */
/*   Updated: 2022/04/20 18:01:40 by tmoret           ###   ########.fr       */
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
	void	*mlx_img;
	void	*mlx_img2;
	void    *mlx_img3;
	void    *mlx_img4;
	int x = 10;
	int y = 10;
	int     b;
    int     n;

	i = -1;
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 640, 480, "Relax !");
	mlx_img = mlx_xpm_file_to_image ( mlx, "./src/img/player-01.xpm", &b, &n );
	mlx_img2 = mlx_xpm_file_to_image ( mlx, "./src/img/player-02.xpm", &b, &n );
	mlx_img3 = mlx_xpm_file_to_image ( mlx, "./src/img/player-03.xpm", &b, &n );
	mlx_img4 = mlx_xpm_file_to_image ( mlx, "./src/img/player-04.xpm", &b, &n );
//    mlx_put_image_to_window(mlx, mlx_win, mlx_img, 0, 0);
	while (1)
	{
		mlx_do_sync(mlx);
		while (++i < 48)
		{
			x = rand() % (640 + 1 - 0) + 0;
			y = rand() % (480 + 1 - 0) + 0;
			mlx_put_image_to_window(mlx, mlx_win, mlx_img4, x, y);
			sleep(1/30);
		}
		i = -1;
		 while (++i < 48)
        {
            x = rand() % (640 + 1 - 0) + 0;
            y = rand() % (480 + 1 - 0) + 0;
            mlx_put_image_to_window(mlx, mlx_win, mlx_img3, x, y);
            sleep(1/30);
        }
        i = -1;
		 while (++i < 48)
        {
            x = rand() % (640 + 1 - 0) + 0;
            y = rand() % (480 + 1 - 0) + 0;
            mlx_put_image_to_window(mlx, mlx_win, mlx_img2, x, y);
            sleep(1/30);
        }
        i = -1; while (++i < 48)
        {
            x = rand() % (640 + 1 - 0) + 0;
            y = rand() % (480 + 1 - 0) + 0;
            mlx_put_image_to_window(mlx, mlx_win, mlx_img, x, y);
            sleep(1/30);
        }
        i = -1;
	}
}
