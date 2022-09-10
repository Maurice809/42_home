/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_play_124.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 18:10:01 by tmoret            #+#    #+#             */
/*   Updated: 2022/09/10 18:10:04 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_mlx_play_124(t_Game *info)
{
	int	i;
	int	j;

	info->mlx_player = mlx_xpm_file_to_image (info->mlx,
			"./src/img/player-03.xpm", &i, &j);
	if (info->map[info->player +1] != '1'
		&& info->map[info->player +1] != 'E')
	{
		info->map[info->player] = '0';
		if (info->map[info->player +1] == 'C')
			--info->diams;
		if (info->map[info->player +1] == 'S')
			exit_hook(info);
		info->map[info->player +1] = 'P';
	}
}
