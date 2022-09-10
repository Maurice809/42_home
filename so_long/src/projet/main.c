/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:41:42 by tmoret            #+#    #+#             */
/*   Updated: 2022/09/10 21:53:41 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	exit_hook(t_Game *info)
{
	(void) info;
	free(info->map);
	free(info);
	exit (0);
}

int	main(int argc, char *argv[])
{	
	int				fd;
	struct Game		*info;

	(void) argc;
	info = malloc(sizeof(t_Game));
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_error(0);
		return (1);
	}
	ft_newgame(info);
	ft_check_file(fd, info);
	ft_check_map(info);
	ft_check_line(info);
	ft_mlx_start(info);
	ft_mlx_aff(info);
	mlx_hook(info->mlx_win, 17, 0, exit_hook, info);
	mlx_key_hook(info->mlx_win, ft_mlx_play, info);
	mlx_loop(info->mlx);
	return (0);
}
