/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:45:30 by Maurice809        #+#    #+#             */
/*   Updated: 2022/12/03 11:17:15 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	atoi(const char *str)

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

void	checkmin(char **argv)
{
	int	i;

	i = 0;
	while (argv[++i])
	{
		if (atoi(argv[i]) <= 0)
			error(2);
		if (atoi(argv[i]) > INT_MAX)
			error(2);
	}
}

void	init(int argc, char **argv, t_state *state)
{
	if (argc < 5 || argc > 6)
		error(1);
	checkmin(argv);
	state->nbr_philo = atoi(argv[1]);
	state->time_death = atoi(argv[2]);
	state->time_eating = atoi(argv[3]);
	state->time_sleeping = atoi(argv[4]);
	if (argc == 6)
	{
		state->eat_count = atoi(argv[5]);
		state->has_eat_count = 1;
	}
}

int	error(int nbr)
{
	if (nbr == 1)
		printf("Error\n\nPas assez ou trop d'argument !");
	if (nbr == 2)
		printf("Error\n\nArgument non valide !");
	if (nbr == 3)
		printf("Error\n\nPas assez de memoire");
	printf("\nExemple : ./philo 5 800 200 200\n");
	exit (1);
}
