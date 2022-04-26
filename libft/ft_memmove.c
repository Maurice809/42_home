/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 19:55:57 by tmoret            #+#    #+#             */
/*   Updated: 2021/10/22 00:42:08 by mort0707         ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

/*
La fonction memmove() copie len octets de la chaîne src vers la chaîne dst. 
Les deux chaînes peuvent se chevaucher ; 
la copie est toujours faite de manière non destructive.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	index;

	if (dst > src)
	{
		index = (int)len - 1;
		while (index >= 0)
		{
			((char *)dst)[index] = ((char *)src)[index];
			index--;
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
