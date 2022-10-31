/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 00:29:29 by Maurice809        #+#    #+#             */
/*   Updated: 2022/10/31 11:23:32 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main(void)
{
	int	fd;

	fd = open("Cookie.txt", O_RDONLY);
	if (fd == -1)
	{
		write(1, "FILE Error\n", 13);
		return (1);
	}
	printf("--------------------------- 1\n");
	printf("%s", get_next_line(fd));
	printf("--------------------------- 2\n");
	printf("%s", get_next_line(fd));
	printf("--------------------------- 3\n");
	printf("%s", get_next_line(fd));
	printf("--------------------------- 4\n");
	printf("%s", get_next_line(fd));
	printf("--------------------------- 5\n");
	printf("%s", get_next_line(fd));
	printf("--------------------------- 6\n");
	printf("%s", get_next_line(fd));
	printf("--------------------------- 7\n");
	printf("%s", get_next_line(fd));
	printf("\n");
	return (0);
}
