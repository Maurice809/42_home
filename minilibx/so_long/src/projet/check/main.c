/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 22:58:17 by Maurice809        #+#    #+#             */
/*   Updated: 2022/05/01 09:21:13 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_bzero(char *s)
{
	int i;
	char *str;
	i = -1;
	while(s[++i]);
	str = (char *)malloc(i + 1);
	if (!str)
			return NULL;
	i = -1;
	while(s[++i])
		str[i] = s[i];
	str[i] ='\0';
	free(s);
	return(str);
}

int main(int argc, char *argv[])
{
	char hello[5];

	hello = "Hello";
	if (ft_bzero(argv[1]) == hello)
		printf("good\n");
	return(0);
}
