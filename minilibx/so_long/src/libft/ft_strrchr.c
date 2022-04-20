/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 22:50:20 by tmoret            #+#    #+#             */
/*   Updated: 2021/10/26 20:23:06 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *La fonction strchr() localise la première occurrence de c (convertie en char) 
 *dans la chaîne pointée par s.  
 Le caractère null de fin est considéré comme faisant partie de la chaîne ; 
 par conséquent, si c est '0', les fonctions localisent la terminaison '0'.     
 La fonction strrchr() est identique à strchr(), 
 sauf qu’elle localise la dernière occurrence de c.
*/

char	*ft_strrchr(const char *s, int c)
{
	int		len;

	len = ft_strlen((char *)s);
	while (0 != len && s[len] != (char)c)
		len--;
	if (s[len] == (char)c)
		return ((char *)&s[len]);
	return (NULL);
}

/*
char	*ft_strrchr(const char *s, int c)
{
	char	*pointer;
	int		s_len;

	s_len = ft_strlen(s);
	pointer = (char *)s + s_len - 1;
	if (c == '\0')
	{
		pointer++;
		return (pointer);
	}
	while (s_len != 0)
	{
		if (*pointer == c)
		{
			return ((char *)pointer);
		}
		s_len--;
		pointer--;
	}
	return (NULL);
}
*/
