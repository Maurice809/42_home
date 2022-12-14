/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:09:36 by Maurice809        #+#    #+#             */
/*   Updated: 2022/12/03 11:16:37 by tmoret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char **argv)
{
	int		i;
	t_state	state;

	state = (t_state){0};
	init(argc, argv, &state);
	if (!creat_philo(&state))
		error(3);
	philo_death(&state);
	state.is_finished = 1;
	i = -1;
	while (++i < state.nbr_philo)
		pthread_join(state.tab_philo[i].pthread, 0);
}
