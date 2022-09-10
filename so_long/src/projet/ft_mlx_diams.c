/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_play.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:34:13 by Maurice809        #+#    #+#             */
/*   Updated: 2022/09/10 17:25:43 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_mlx_diams(t_Game *info)
{
	int	i;
	int	j;

	info->i = -1;
	if (info->diams == 0)
	{
		while (info->map[++info->i])
		{
			if (info->map[info->i] == 'E')
				info->map[info->i] = 'S';
		}
		info->mlx_door = mlx_xpm_file_to_image (info->mlx,
				"./src/img/door-02.xpm", &i, &j);
	}
}
