/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 14:43:23 by Maurice809        #+#    #+#             */
/*   Updated: 2022/09/09 21:37:48 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check_map(t_Game *info)
{
	info->carater = 0;
	while (info->map[++info->i])
	{
		if (info->map[info->i] == '0' || info->map[info->i] == '1')
			info->carater++;
		if (info->map[info->i] == 'P')
		{
			info->player++;
			info->carater++;
		}
		if (info->map[info->i] == 'C')
		{
			info->diams++;
			info->carater++;
		}
		if (info->map[info->i] == 'E')
		{
			info->exit++;
			info->carater++;
		}
	}
	if (info->i != info->carater || info->player != 1 || info->exit == 0
		|| info->diams == 0)
		info->erreur++;
}
