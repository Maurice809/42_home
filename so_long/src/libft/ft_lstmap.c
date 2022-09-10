/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:45:29 by tmoret            #+#    #+#             */
/*   Updated: 2022/05/16 19:37:45 by Maurice809       ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_content;
	t_list	*lst_final;

	if (!(lst))
		return (NULL);
	lst_final = 0;
	while (lst)
	{
		new_content = ft_lstnew(f(lst->content));
		if (!new_content)
		{
			ft_lstclear(&lst_final, del);
			return (NULL);
		}
		ft_lstadd_back(&lst_final, new_content);
		lst = lst->next;
	}
	return (lst_final);
}
