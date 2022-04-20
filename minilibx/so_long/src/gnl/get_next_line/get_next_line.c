/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 17:05:41 by tmoret            #+#    #+#             */
/*   Updated: 2022/03/18 17:34:51 by tmoret           ###   ########.fr       */
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
