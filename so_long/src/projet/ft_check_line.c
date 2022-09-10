/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:26:52 by Maurice809        #+#    #+#             */
/*   Updated: 2022/09/10 14:12:01 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check_line(t_Game *info)
{
	info->colone_temp = 1;
	info->ligne_temp = 1;
	info->i = -1;
	while (info->map[++info->i])
	{
		if (info->map[info->i] != '1' && info->colone_temp == 1)
			info->erreur++;
		if (info->map[info->i] != '1' && info->colone_temp == info->colone)
			info->erreur++;
		if (info->colone_temp == info->colone)
		{
			info->colone_temp = 0;
			++info->ligne_temp;
		}
		if (info->map[info->i] != '1' && info->ligne_temp == info->ligne)
		{
			info->erreur++;
		}
		++info->colone_temp;
	}
	if (info->erreur != 0)
		ft_error(1);
}
