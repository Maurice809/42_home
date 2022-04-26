/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 21:12:23 by tmoret            #+#    #+#             */
/*   Updated: 2021/10/29 15:11:26 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * La fonction strdup() alloue suffisamment de mémoire pour une copie 
 * de la chaîne s1, effectue la copie et renvoie un pointeur vers elle.  
 * Le pointeur peut ensuite être utilisé comme argument pour 
 * la fonction free(3).
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		s1_len;
	char	*str_copy;
	int		index;

	s1_len = ft_strlen(s1);
	str_copy = malloc(sizeof(*str_copy) * (s1_len + 1));
	if (str_copy)
	{
		index = 0;
		while (s1[index] != '\0')
		{
			str_copy[index] = s1[index];
			index++;
		}
		str_copy[index] = '\0';
	}
	return (str_copy);
}
