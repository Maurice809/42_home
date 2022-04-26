/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 22:27:06 by tmoret            #+#    #+#             */
/*   Updated: 2021/10/22 00:47:18 by mort0707         ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

/*
 *La fonction toupper() convertit une lettre minuscule en lettre majuscule 
 *correspondante.  
 L’argument doit pouvoir être représenté par un caractère 
 non signé ou la valeur de EOF.     
 Bien que la fonction toupper() utilise les paramètres régionaux actuels, 
 la fonction toupper_l() peut se faire passer directement des paramètres 
 régionaux. Voir xlocale(3) pour plus d’informations.
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = (c - 'a' + 'A');
	}
	return (c);
}
