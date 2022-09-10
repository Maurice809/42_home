/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:35:36 by Maurice809        #+#    #+#             */
/*   Updated: 2022/06/16 20:48:42 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr(char *str, int *count)
{
	if (str == NULL)
	{
		ft_putstr("(null)", count);
		return (*count);
	}	
	while (*str)
	{
		ft_putchar(*str, count);
		str++;
	}
	return (*count);
}
