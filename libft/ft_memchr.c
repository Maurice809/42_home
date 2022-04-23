/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 20:11:56 by tmoret            #+#    #+#             */
/*   Updated: 2021/10/22 00:40:18 by mort0707         ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

/*
 *La fonction memchr() localise la première occurrence de c 
 *(convertie en un caractère non signé) dans la chaîne s.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	bnk;
	unsigned char	*str;

	str = (unsigned char *)s;
	bnk = (unsigned char)c;
	index = 0;
	while (index < n)
	{
		if (*str == bnk)
		{
			return (str);
		}
		str++;
		index++;
	}
	return (NULL);
}
