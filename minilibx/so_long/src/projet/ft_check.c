/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:51:18 by Maurice809        #+#    #+#             */
/*   Updated: 2022/05/09 19:06:08 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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

int ft_checkfile(int fd)
{
	char *figame;
	int longline;
	int nbline;
	
	figame = (char *)malloc(1);
    figame[0] = '\0';
	longline = 1;
	nbline = 1;

    while ((ret = read(fd, &c, 1)) > 0)
    {
		if (nbline == 1 || ret == 1)
			longline++;
		else
			return (1);
		if (nbline =)
		if (ret = '\n')
			nbline++;





		if (ret != '\n')
			figame = ft_strjoin(figame, c);
    }

	return (0);
}

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] == s2[i] && s1[i])
        i++;
    return (s1[i] - s2[i]);
}

int	ft_check(char *path)
{
	int		fd;
	char	*file;

	fd = open(path, O_RDONLY);
	if (fd < 0)
		return (0);
	file = ft_strrchr(path, '.');
	if (file == NULL || ft_strcmp(".ber", file) != 0)
		ft_checkfile(fd);
	return (1);
}
