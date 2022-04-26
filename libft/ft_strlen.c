/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 20:56:18 by tmoret            #+#    #+#             */
/*   Updated: 2021/10/22 00:44:59 by mort0707         ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

/*
 La fonction strlen() calcule la longueur de la chaîne s.  
 La fonction strnlen() tente de composer la longueur de s, 
 mais ne scanne jamais au-delà des premiers octets maxlen de s.
*/

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}
