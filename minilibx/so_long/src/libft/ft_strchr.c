/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 22:43:22 by tmoret            #+#    #+#             */
/*   Updated: 2021/10/26 20:08:32 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * La fonction strchr() localise la première occurrence de c (convertie en char 
 * dans la chaîne pointée par s.  
 * Le caractère null de fin est considéré comme faisant partie de la chaîne ; 
 * par conséquent, si c est '0', les fonctions localisent la terminaison '0'.
 */

#include "libft.h"

char	*ft_strchr(const char *s, int c)

{
	while (*s)
	{
		if ((char)*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)*s == (char)c)
		return ((char *)s);
	return (NULL);
}
