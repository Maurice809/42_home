/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:38:09 by tmoret            #+#    #+#             */
/*   Updated: 2021/10/22 00:41:42 by mort0707         ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

/*
La fonction memcpy() copie n octets de la zone mémoire src 
vers la zone mémoire dst.  
Si dst et src sur-tour, le comportement n'est pas défini. 
Les applications dans lesquelles dst et src peuvent 
se chevaucher doivent utiliser memmove(3)
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			index;
	unsigned char	*access_src;
	unsigned char	*edit_dst;

	index = 0;
	if (src == NULL && dst == NULL)
		return (NULL);
	access_src = (unsigned char *)src;
	edit_dst = (unsigned char *)dst;
	while (index < n)
	{
		edit_dst[index] = access_src[index];
		index++;
	}
	return (dst);
}
