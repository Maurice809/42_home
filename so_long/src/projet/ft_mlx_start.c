/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_start.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:16:21 by tmoret            #+#    #+#             */
/*   Updated: 2022/09/10 21:18:04 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_mlx_start(t_Game *info)
{
	int	i;
	int	j;

	info->mlx = mlx_init();
	info->mlx_win = mlx_new_window(info->mlx,
			info->colone * 48, (info->ligne * 48) + 20, "so_long");
	info->mlx_mur = mlx_xpm_file_to_image (info->mlx,
			"./src/img/wall-01.xpm", &i, &j);
	info->mlx_sol = mlx_xpm_file_to_image (info->mlx,
			"./src/img/vide-01.xpm", &i, &j);
	info->mlx_player = mlx_xpm_file_to_image (info->mlx,
			"./src/img/player-01.xpm", &i, &j);
	info->mlx_diams = mlx_xpm_file_to_image (info->mlx,
			"./src/img/collectible-01.xpm", &i, &j);
	info->mlx_door = mlx_xpm_file_to_image (info->mlx,
			"./src/img/door-01.xpm", &i, &j);
	mlx_string_put(info->mlx, info->mlx_win, 10,
		(info->ligne * 48) + 15, 0xFFFFFF, "Score : ");
}
