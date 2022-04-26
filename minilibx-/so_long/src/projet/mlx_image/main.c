/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 09:17:34 by Maurice809        #+#    #+#             */
/*   Updated: 2022/03/25 15:28:05 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "mlx.h"
#include <stdio.h>

int	main(void)
{
	int		i;
	int		j;
	void	*mlx;
	void	*mlx_win;
	void 	*mlx_img;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 640, 480, "so_long");

	mlx_img = mlx_xpm_file_to_image ( mlx, "./src/img/vide-01.xpm", &i, &j );
    mlx_put_image_to_window(mlx, mlx_win, mlx_img, 0, 0);
	mlx_img = mlx_xpm_file_to_image ( mlx, "./src/img/player-01.xpm", &i, &j );
	mlx_put_image_to_window(mlx, mlx_win, mlx_img, 0, 0);

	mlx_img = mlx_xpm_file_to_image ( mlx, "./src/img/vide-01.xpm", &i, &j );
    mlx_put_image_to_window(mlx, mlx_win, mlx_img, 48, 0);
	mlx_img = mlx_xpm_file_to_image ( mlx, "./src/img/player-02.xpm", &i, &j );
	mlx_put_image_to_window(mlx, mlx_win, mlx_img, 48, 0);

	mlx_img = mlx_xpm_file_to_image ( mlx, "./src/img/vide-02.xpm", &i, &j );
    mlx_put_image_to_window(mlx, mlx_win, mlx_img, 96, 0);

	mlx_img = mlx_xpm_file_to_image ( mlx, "./src/img/wall-01.xpm", &i, &j );
    mlx_put_image_to_window(mlx, mlx_win, mlx_img, 144, 0);
	mlx_put_image_to_window(mlx, mlx_win, mlx_img, 144, 48);
	mlx_put_image_to_window(mlx, mlx_win, mlx_img, 144, 96);
	mlx_put_image_to_window(mlx, mlx_win, mlx_img, 192, 0);
	mlx_put_image_to_window(mlx, mlx_win, mlx_img, 240, 0);

	mlx_img = mlx_xpm_file_to_image ( mlx, "./src/img/vide-01.xpm", &i, &j );
    mlx_put_image_to_window(mlx, mlx_win, mlx_img, 0, 48);
	mlx_img = mlx_xpm_file_to_image ( mlx, "./src/img/player-03.xpm", &i, &j );
	mlx_put_image_to_window(mlx, mlx_win, mlx_img, 0, 48);
	mlx_img = mlx_xpm_file_to_image ( mlx, "./src/img/vide-01.xpm", &i, &j );
    mlx_put_image_to_window(mlx, mlx_win, mlx_img, 48, 96);
	mlx_img = mlx_xpm_file_to_image ( mlx, "./src/img/collectible-01.xpm", &i, &j );
    mlx_put_image_to_window(mlx, mlx_win, mlx_img, 48, 96);
	mlx_img = mlx_xpm_file_to_image ( mlx, "./src/img/player-04.xpm", &i, &j );
	mlx_put_image_to_window(mlx, mlx_win, mlx_img, 48, 48);
	mlx_img = mlx_xpm_file_to_image ( mlx, "./src/img/vide-01.xpm", &i, &j );
	mlx_put_image_to_window(mlx, mlx_win, mlx_img, 48, 48);
	mlx_img = mlx_xpm_file_to_image ( mlx, "./src/img/player-04.xpm", &i, &j );
    mlx_put_image_to_window(mlx, mlx_win, mlx_img, 48, 48);
	mlx_loop(mlx);
}
