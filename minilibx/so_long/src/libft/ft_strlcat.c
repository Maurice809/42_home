/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:29:35 by tmoret            #+#    #+#             */
/*   Updated: 2021/10/22 17:35:41 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Les fonctions strlcpy() et strlcat() copient et concaténent des chaînes
 * avec les mêmes paramètres d'entrée
 * et afficher le résultat sous la forme snprintf(3). Ils sont conçus pour 
 * être plus sûrs, plus cohérents et moins d'erreurs 
 * remplacements enclins pour les fonctions facilement mal utilisées
 * strncpy(3) et strncat(3).
 *
 * strlcpy() et strlcat() prennent la pleine taille du tampon de 
 * destination et garantissent la terminaison NUL 
 * s'il y a de la place. Notez que la place pour le NUL doit être incluse 
 * dans dstsize.
 *
 *strlcpy() copie jusqu'à dstsize - 1 caractères de la chaîne src vers dst, 
 en terminant par NUL résultat si dstsize n'est pas 0.
 *
 *strlcat() ajoute la chaîne src à la fin de dst. Il ajoutera au plus 
 dstsize - strlen (dst) - 1
 *                                        
 *  personnages. Il se terminera alors par NUL, à moins que 
 *  dstsize soit 0 ou que la chaîne dst d'origine soit plus longue
 * que dstsize (en pratique, cela ne devrait pas arriver car cela 
 * signifie que dstsize est incorrect ou
 * que dst n'est pas une chaîne appropriée).
 *
 * Si les chaînes src et dst se chevauchent, 
 * le comportement n'est pas défini.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t maxlen)
{
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstlen > maxlen)
	{
		dstlen = maxlen;
	}
	if (dstlen == maxlen || maxlen == 0)
	{
		return (dstlen + srclen);
	}
	if (srclen < maxlen - dstlen)
	{
		ft_memcpy(dst + dstlen, src, srclen + 1);
	}
	else
	{
		ft_memcpy(dst + dstlen, src, maxlen - dstlen - 1);
		dst[maxlen - 1] = '\0';
	}
	return (dstlen + srclen);
}
