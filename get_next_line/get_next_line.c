/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 17:05:41 by Maurice809        #+#    #+#             */
/*   Updated: 2022/04/18 22:42:28 by mort0707         ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int		line;
	int		i;
	char	c;
	char	*buf;

	line = 1;
	buf = malloc(10000);
	i = 0;
	while (line > 0)
	{
		line = read(fd, &c, 1);
		buf[i++] = c;
		if (c == '\n')
			break ;
	}
	if (!line && !buf[i - 1])
	{
		free(buf);
		return (NULL);
	}
	buf[i] = '\0';
	return (buf);
}
