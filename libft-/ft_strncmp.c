/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 22:59:22 by tmoret            #+#    #+#             */
/*   Updated: 2021/10/22 14:21:49 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *La fonction strchr() localise la première occurrence de c (convertie en char) 
 dans la chaîne pointée par s.  Le caractère null de fin est considéré comme 
 faisant partie de la chaîne ; par conséquent, si c est '0', 
 les fonctions localisent la terminaison '0'.     
 La fonction strrchr() est identique à strchr(), sauf qu’elle localise 
 la dernière occurrence de c.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			id;

	if (n == 0)
		return (0);
	id = 0;
	while (s1[id] == s2[id] && s1[id] != '\0' && s2[id] != '\0' && id < (n - 1))
	{
		id++;
	}
	return ((unsigned char)s1[id] - (unsigned char)s2[id]);
}
