/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 21:32:27 by tmoret            #+#    #+#             */
/*   Updated: 2021/10/22 00:34:56 by mort0707         ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

/*
 * le mec doit arreter de faire des gaines a 22:00...
 La fonction isalnum() teste tout caractère pour 
 lequel isalpha(3) ou isdigit(3) est vrai.  
 La valeur de l’argument doit pouvoir être représenté 
 par un caractère non signé ou la valeur de EOF.     
 Dans le jeu de caractères ASCII, cela inclut  
 les caractères suivants (précédés de leurs valeurs numériques, en octal):
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
	{
		return (1);
	}
	return (0);
}
