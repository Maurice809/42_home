/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:38:08 by tmoret            #+#    #+#             */
/*   Updated: 2022/05/16 19:34:05 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*t_tmp;

	if (!(lst) || !(del))
		return ;
	tmp = *lst;
	while (tmp)
	{
		t_tmp = tmp->next;
		ft_lstdelone(tmp, del);
		tmp = t_tmp;
	}
	*lst = NULL;
}
