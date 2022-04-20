/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 09:16:16 by tmoret            #+#    #+#             */
/*   Updated: 2021/10/30 15:04:44 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  La fonction strnstr () localise la première occurrence 
  de la null-termi-chaîne née peu dans la chaîne grande, 
  où pas plus de caractères quelen sont recherchés. 
  Les caractères qui apparaissent après un caractère `\\0' ne sont pas
  recherché. Étant donné que la fonction strnstr() est une API spécifique 
  à FreeBSD, elle
  ne doit être utilisé que lorsque la portabilité n'est pas un problème
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*phaystack;
	size_t	letters_left;
	size_t	needle_len;
	size_t	i;

	phaystack = (char *)haystack;
	if (needle[0] == '\0')
		return (phaystack);
	i = 0;
	letters_left = len;
	needle_len = (size_t)ft_strlen(needle);
	while (*phaystack && letters_left >= needle_len)
	{
		if (*phaystack == *needle)
		{
			if (ft_strncmp(needle, phaystack, needle_len) == 0)
				return (phaystack);
		}
		i++;
		letters_left--;
		phaystack++;
	}
	return (NULL);
}
