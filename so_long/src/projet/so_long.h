/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:41:22 by Maurice809        #+#    #+#             */
/*   Updated: 2022/09/10 18:08:15 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "libft.h"
# include <stdio.h>
# include "mlx.h"

typedef struct Game
{
	char	*map;
	int		i;
	int		carater;
	int		colone;
	int		colone_temp;
	int		ligne;
	int		ligne_temp;
	int		player;
	int		diams;
	int		exit;
	int		erreur;
	void	*mlx;
	void	*mlx_win;
	void	*mlx_player;
	void	*mlx_mur;
	void	*mlx_sol;
	void	*mlx_vide;
	void	*mlx_diams;
	void	*mlx_door;
}	t_Game;

void	ft_newgame(t_Game *info);
void	ft_check_file(int fd, t_Game *info);
void	ft_check_map(t_Game *info);
void	ft_check_line(t_Game *info);

char	*ft_strjoin1(char *s, char c);
int		ft_error(int nbr);
void	ft_mlx_start(t_Game *info);
void	ft_mlx_aff(t_Game *info);
void	ft_mlx_diams(t_Game *info);
void	ft_mlx_aff2(t_Game *info);
int		ft_mlx_play(int keycode, t_Game *info);
void	ft_mlx_play_124(t_Game *info);
void	ft_mlx_play_123(t_Game *info);
void	ft_mlx_play_125(t_Game *info);
void	ft_mlx_play_126(t_Game *info);
int		exit_hook(t_Game *info);

#endif
