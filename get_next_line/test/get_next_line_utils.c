/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 10:10:19 by Maurice809        #+#    #+#             */
/*   Updated: 2022/04/24 10:24:27 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *ft_strjoin(char *s, char c)
{
	char *str;
	int i = - 1;
	while (s[++i]);
	str = (char *)malloc(i + 2);
	if (!str)
		return NULL;
	i = - 1;
   while(s[++i])
	   str[i] = s[i];
	str[i] = c;
	str[i + 1] = '\0';
	free(s);
	return (str);
}
