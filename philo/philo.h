/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:42:22 by Maurice809        #+#    #+#             */
/*   Updated: 2022/12/02 19:25:37 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <pthread.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <sys/time.h>

typedef unsigned int	t_bool;

typedef struct s_philo	t_philo;
typedef struct s_state	t_state;

typedef struct s_philo
{
	int				id;
	int				last_eat;
	int				eat_count;
	t_state			*state;
	pthread_t		pthread;
	pthread_mutex_t	mutex;

}	t_philo;

typedef struct s_state
{	
	int				nbr_philo;
	int				time_death;
	int				time_eating;
	int				time_sleeping;
	int				start;
	int				eat_count;
	t_philo			*tab_philo;
	t_bool			is_started;
	t_bool			is_finished;
	t_bool			has_eat_count;
	pthread_mutex_t	mutex_print;
}	t_state;

int		error(int nbr);
void	check(int argc, char **argv, t_state *state);
void	checkmin(char **argv);
void	init(int argc, char **argv, t_state *state);
int		atoi(const char *str);
void	philo_death(t_state *state);
t_bool	creat_philo(t_state *state);
int		philo_time(t_state *state);
void	philo_print(char *str, t_philo *philo);
void	philo_sleep(int sleeping, t_state *state);
void	philo_life(t_philo *philo, pthread_mutex_t *first_fork,
			pthread_mutex_t	*second_fork);
void	philo_exeption(pthread_mutex_t *first_fork, t_philo *philo);
#endif
