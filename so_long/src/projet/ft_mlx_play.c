/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx_play.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:34:13 by Maurice809        #+#    #+#             */
/*   Updated: 2022/09/10 21:39:40 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_mlx_play(int keycode, t_Game *info)
{
	int			i;
	int			j;
	static int	count = 0;
	char		*clear;

	clear = mlx_xpm_file_to_image (info->mlx, "./src/img/clear.xpm", &i, &j);
	mlx_put_image_to_window(info->mlx, info->mlx_win,
		clear, 70, info->ligne * 48);
	mlx_string_put(info->mlx, info->mlx_win, 70,
		(info->ligne * 48) + 15, 0xFFFFFF, ft_itoa(++count));
	ft_printf("Score : %i\n", count);
	ft_mlx_diams(info);
	if (keycode == 124 || keycode == 2)
		ft_mlx_play_124(info);
	if (keycode == 123 || keycode == 0)
		ft_mlx_play_123(info);
	if (keycode == 125 || keycode == 1)
		ft_mlx_play_125(info);
	if (keycode == 126 || keycode == 13)
		ft_mlx_play_126(info);
	if (keycode == 53)
		exit_hook(info);
	ft_mlx_aff(info);
	return (0);
}
