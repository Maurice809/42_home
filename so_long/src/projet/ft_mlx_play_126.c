/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_play_126.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 18:08:55 by tmoret            #+#    #+#             */
/*   Updated: 2022/09/10 18:08:58 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_mlx_play_126(t_Game *info)
{
	int	i;
	int	j;

	info->mlx_player = mlx_xpm_file_to_image (info->mlx,
			"./src/img/player-04.xpm", &i, &j);
	if (info->map[info->player - info->colone] != '1'
		&& info->map[info->player - info->colone] != 'E')
	{
		info->map[info->player] = '0';
		if (info->map[info->player - info->colone] == 'C')
			--info->diams;
		if (info->map[info->player - info->colone] == 'S')
			exit_hook(info);
		info->map[info->player - info->colone] = 'P';
	}
}
