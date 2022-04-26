/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:12:31 by tmoret            #+#    #+#             */
/*   Updated: 2021/10/22 00:33:55 by mort0707         ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

/*
La fonction bzero() écrit n octets mis à zéro dans la chaîne s. 
Si n est égal à zéro, bzero() le fait rien..
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (n != 0)
	{
		ft_memset(s, '\0', n);
	}
}
