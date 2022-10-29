/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 18:24:29 by tmoret            #+#    #+#             */
/*   Updated: 2022/10/29 20:04:46 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_init(int fd, t_read_info *buf)
{
	buf->fd = fd;
	buf->max = read(buf->fd, buf->data, BUFFER_SIZE);
	if (buf->max < 0)
		return (0);
	buf->pos = 0;
	return (1);
}

int	ft_single(t_read_info *buf, char *res)
{
	*res = '\0';
	if (buf->pos >= buf->max)
	{
		buf->max = read(buf->fd, buf->data, BUFFER_SIZE);
		if (buf->max <= 0)
			return (0);
		buf->pos = 0;
	}
	*res = buf->data[buf->pos];
	buf->pos++;
	return (1);
}

char	*ft_strjoin(char *s, char c)
{
	int		i = 0, len = -1;
	char	*line;

	len = -1;
	while (s && s[++len])
		;
	line = malloc(len + 2);
	if (!line)
		return (0);
	i = 0;
	while (s && i < len)
	{
		line[i] = s[i];
		i++;
	}
	line[i] = c;
	line[++i] = '\0';
	free(s);
	return (line);
}

char    *get_next_line(int fd)
{
    static t_read_info  read_info = {.fd = -1};
    char                c, *line;

    if (fd != read_info.fd)
    {
        if (!ft_init(fd, &read_info))
            return (0);
    }
    line = 0;
    while (ft_single(&read_info, &c))
    {
        line = ft_strjoin(line, c);
        if (c == '\n')
            break ;
    }
    return (line);
}
