/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:01:30 by tmoret            #+#    #+#             */
/*   Updated: 2022/10/31 10:19:36 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>

# if !defined(BUFFER_SIZE) || BUFFER_SIZE <= 0
#  error "BUFFER_SIZE is either, not defined, equals zero or negative"
#  undef BUFFER_SIZE
#  define BUFFER_SIZE 0
# endif

typedef struct s_read_info
{
	int fd;
	int pos;
	int max;
	char data[BUFFER_SIZE];
} t_read_info;

char *get_next_line(int fd);
int ft_init(int fd, t_read_info *buff);
int ft_read(t_read_info *info, char *res);
char *ft_strjoin(char *s, char c);

#endif
