/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:38:42 by Maurice809        #+#    #+#             */
/*   Updated: 2022/02/19 22:40:09 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_str_isnum(char *str)
{
	int	i;

	i = -1;
	while (*(str + ++i))
		if (*(str + i) < '0' || *(str + i) > '9')
			return (1);
	return (0);
}

void	sender(pid_t pid, char *str)
{
	int	bit;

	bit = 7;
	while (*str)
	{
		bit = 7;
		while (bit >= 0)
		{
			if (*str & (1 << bit--))
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(100);
		}
		str++;
	}
}

void	sighandler(int signum)
{
	static char	c = 0;
	static int	bit = 7;

	if (signum == SIGUSR1)
		c |= (1 << bit);
	if (signum == SIGUSR2)
		c &= ~(1 << bit);
	bit--;
	if (bit == -1)
	{
		write(1, &c, 1);
		bit = 7;
	}
}

int	ft_atoi(const char *str)
{
	int	neg;
	int	i;
	int	num;

	i = 0;
	neg = 1;
	num = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * neg);
}

int	main(int argc, char *argv[])
{	
	pid_t	pid;
	char	*str;

	if (argv[1] && ft_str_isnum(argv[1]))
	{
		ft_printf("ERROR : invalid argument\n");
		return (1);
	}
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		str = argv[2];
		sender(pid, str);
		sender(pid, "\n");
	}
	else
	{
		ft_printf("PID : %d\n", getpid());
		signal(SIGUSR1, sighandler);
		signal(SIGUSR2, sighandler);
		while (1)
			sleep(100);
	}	
	return (0);
}
