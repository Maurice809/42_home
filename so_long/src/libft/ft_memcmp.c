/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 20:33:57 by tmoret            #+#    #+#             */
/*   Updated: 2021/10/22 00:41:05 by mort0707         ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

/*
La fonction memcmp() compare la chaîne d'octets s1 à la chaîne d'octets s2. 
Les deux chaînes sont supposées être n octets de long. 
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			index;
	unsigned char	*s1_str;
	unsigned char	*s2_str;

	s1_str = (unsigned char *)s1;
	s2_str = (unsigned char *)s2;
	index = 0;
	while (index < n)
	{
		if (s1_str[index] != s2_str[index])
		{
			return (s1_str[index] - s2_str[index]);
		}
		index++;
	}
	return (0);
}
