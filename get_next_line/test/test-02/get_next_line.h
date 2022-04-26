/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 09:36:19 by Maurice809        #+#    #+#             */
/*   Updated: 2022/04/25 09:51:25 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>


char *get_next_line(int fd);
char *ft_strjoin(char *s, char c);

#endif
