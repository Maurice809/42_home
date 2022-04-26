/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 22:35:11 by tmoret            #+#    #+#             */
/*   Updated: 2021/10/22 00:46:41 by mort0707         ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

/*
 * La fonction tolower() convertit une lettre majuscule en lettre minuscule 
 * correspondante.  L’argument doit pouvoir être représenté par un caractère 
 * non signé ou la valeur de EOF.  
 * Bien que la fonction tolower() utilise les paramètres régionaux actuels, 
 * la fonction tolower_l() peut se faire passer directement 
 * un paramètre régional. Voir xlocale(3) pour plus d’informations.
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = (c - 'A' + 'a');
	}
	return (c);
}
