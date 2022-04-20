/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 21:23:12 by tmoret            #+#    #+#             */
/*   Updated: 2021/10/22 00:37:59 by mort0707         ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

/*
 * La fonction isdigit() teste un caractère décimal.  
 * Quels que soient les paramètres régionaux,  
 * cela inclut uniquement les caractères suivants : 
 * ''0' ''1' ''2' ''3' ''4' ''5' ''6' ''7' ''8' ''9'
*/

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}
