/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_play_125.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 18:09:21 by tmoret            #+#    #+#             */
/*   Updated: 2022/09/10 18:09:24 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_mlx_play_125(t_Game *info)
{
	int	i;
	int	j;

	info->mlx_player = mlx_xpm_file_to_image (info->mlx,
			"./src/img/player-01.xpm", &i, &j);
	if (info->map[info->player + info->colone] != '1'
		&& info->map[info->player + info->colone] != 'E')
	{
		info->map[info->player] = '0';
		if (info->map[info->player + info->colone] == 'C')
			--info->diams;
		if (info->map[info->player + info->colone] == 'S')
			exit_hook(info);
		info->map[info->player + info->colone] = 'P';
	}
}
