/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:10:45 by Maurice809        #+#    #+#             */
/*   Updated: 2022/12/02 17:45:06 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	philo_print(char *str, t_philo *philo)
{
	pthread_mutex_lock(&philo->state->mutex_print);
	if (!philo->state->is_finished)
		printf("%i %i %s \n", philo_time(philo->state), philo->id, str);
	pthread_mutex_unlock(&philo->state->mutex_print);
}

int	philo_time(t_state *state)
{
	struct timeval	time;

	gettimeofday(&time, 0);
	return ((time.tv_sec * 1000) + (time.tv_usec / 1000) - state->start);
}

void	philo_life(t_philo *philo, pthread_mutex_t *first_fork,
		pthread_mutex_t	*second_fork)
{
	pthread_mutex_lock(first_fork);
	philo_print("has taken a fork", philo);
	pthread_mutex_lock(second_fork);
	philo_print("has taken a fork", philo);
	philo_print("is eating", philo);
	philo->last_eat = philo_time(philo->state);
	philo_sleep(philo->state->time_eating, philo->state);
	philo->eat_count++;
	pthread_mutex_unlock(first_fork);
	pthread_mutex_unlock(second_fork);
	philo_print("is sleeping", philo);
	philo_sleep(philo->state->time_sleeping, philo->state);
	philo_print("is thinking", philo);
}

void	philo_exeption(pthread_mutex_t *first_fork, t_philo *philo)
{
	pthread_mutex_lock(first_fork);
	philo_print("has taken a fork", philo);
}

void	philo_sleep(int sleeping, t_state *state)
{
	int	start;

	start = philo_time(state);
	if (!state->is_finished)
	{
		while (start + sleeping > philo_time(state) && !state->is_finished)
			;
	}
}
