/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 10:38:03 by Maurice809        #+#    #+#             */
/*   Updated: 2022/04/23 11:14:11 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

# ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>

char *get_next_line(int fd);
char *ft_strjoin(char *s, char c);

# endif
