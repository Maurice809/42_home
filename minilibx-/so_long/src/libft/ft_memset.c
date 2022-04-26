/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:19:09 by tmoret            #+#    #+#             */
/*   Updated: 2021/10/30 11:19:58 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
La fonction ft_memset() écrit len octets de valeur c (convertis en un
caractère non signé) à la chaîne b. Renvoie son premier argument. 
*/

void	*ft_memset(void *b, int c, size_t len)

{
	char	*str;
	size_t	i;

	str = (char *)b;
	i = 0;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*{
  int           i;
  unsigned char *p = b;
  i = 0;
  while(len > 0)
    {
      *p = c;
      p++;
      len--;
    }
  return(b);
}

{
	size_t	i;
	char *s;
	s	= (char *) b;
	
	i = 0;
while(s[i] && len < 0)
{
		s[i++] = c;
		len--;
}

s[i] = '\0';

b = s;
return(b);
	// int		i;
	// char	*string;
	//
	// i = 0;
	// string = b;
	// while (i < len)
	// {
	// 	string[i] = c;
	// 	i++;
	// }
	// string[i] = '\0';
	// b = string;
	// return (b);
}
*/
