/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 22:16:53 by tmoret            #+#    #+#             */
/*   Updated: 2021/10/22 00:38:34 by mort0707         ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

/*
La fonction isprint() teste n’importe quel caractère d’impression, 
y compris l’espace (' ').   La valeur de l’argument doit pouvoir être 
représenté par un caractère non signé ou la valeur de EOF.     
Dans le jeu de caractères ASCII, 
cela inclut les caractères suivants 
(précédés de leurs valeurs numériques, en octal):
*/

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
