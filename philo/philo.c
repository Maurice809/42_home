/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:12:01 by Maurice809        #+#    #+#             */
/*   Updated: 2022/12/02 15:12:04 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	philo_death(t_state *state)
{
	int	i;
	int	full_eat_count;

	while (42)
	{
		full_eat_count = 0;
		i = -1;
		while (++i < state->nbr_philo)
		{
			if (state->tab_philo[i].last_eat
				+ state->time_death < philo_time(state))
			{
				philo_print("died", &state->tab_philo[i]);
				return ;
			}
			if (state->tab_philo[i].eat_count >= state->eat_count)
				full_eat_count++;
		}
		if (state->has_eat_count && full_eat_count == state->nbr_philo)
			return ;
	}
}

void	*philo(void *param)
{
	t_philo			*philo;
	pthread_mutex_t	*first_fork;
	pthread_mutex_t	*second_fork;

	philo = (t_philo *)param;
	while (!philo->state->is_started)
		;
	first_fork = &philo->mutex;
	second_fork = &(philo->state->tab_philo[(philo->id + 1)
			% philo->state->nbr_philo].mutex);
	if (philo->id % 2)
	{
		first_fork = &(philo->state->tab_philo[(philo->id + 1)
				% philo->state->nbr_philo].mutex);
		second_fork = &philo->mutex;
		philo_sleep(10, philo->state);
	}
	if (first_fork == second_fork)
		return (philo_exeption(first_fork, philo), NULL);
	while (!philo->state->is_finished)
		philo_life(philo, first_fork, second_fork);
	return (0);
}

t_bool	creat_philo(t_state *state)
{
	int		i;

	state->tab_philo = malloc(state->nbr_philo * sizeof(t_philo));
	if (state->tab_philo == NULL)
		return (0);
	i = -1;
	if (pthread_mutex_init(&state->mutex_print, 0))
		return (0);
	while (++i < state->nbr_philo)
	{
		state->tab_philo[i] = (t_philo){0};
		state->tab_philo[i].id = i;
		state->tab_philo[i].state = state;
		if (pthread_mutex_init(&state->tab_philo[i].mutex, 0))
			return (0);
		if (pthread_create(&state->tab_philo[i].pthread, 0,
				philo, &state->tab_philo[i]))
			return (0);
	}
	state->start = philo_time(state);
	state->is_started = 1;
	return (1);
}
