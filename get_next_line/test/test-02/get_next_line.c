/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 09:19:53 by Maurice809        #+#    #+#             */
/*   Updated: 2022/04/25 09:57:29 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	char c, *line;
	int ret, i = -1;

	if (fd < 0)
		return NULL;
	line = (char *)malloc(1);
	line[0] = '\0';
	while((ret = read(fd, &c, 1)) > 0)
	{
		line = ft_strjoin(line, c);
		if (c == '\n')
			break ;
	}
	while(line[++i]);
	if (i == 0 || ret == -1)
	{
		free(line);
		return NULL;
	}
	return (line);
}
