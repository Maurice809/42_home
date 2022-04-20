/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 17:14:28 by tmoret            #+#    #+#             */
/*   Updated: 2021/10/30 15:36:37 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_new(size_t size)
{
	char	*str;

	if (size == 0)
	{
		str = (char *)malloc(sizeof(*str) * (1));
		if (str)
		{
			ft_memset(str, '\0', (1));
			return (str);
		}
	}
	else if (size)
	{
		str = (char *)malloc(sizeof(*str) * (size + 1));
		if (str)
		{
			ft_memset(str, '\0', (size + 1));
			return (str);
		}
	}
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;

	if (s1 && s2)
	{
		str = ft_new(ft_strlen(s1) + ft_strlen(s2) + 1);
		if (str)
		{
			i = 0;
			while (*s1)
			{
				str[i++] = *s1;
				s1++;
			}	
			while (*s2)
			{
				str[i++] = *s2;
				s2++;
			}
			str[i] = '\0';
			return (str);
		}
	}
	return (NULL);
}
