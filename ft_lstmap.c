/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utoomey <utoomey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 00:08:27 by utoomey           #+#    #+#             */
/*   Updated: 2020/05/10 10:41:34 by utoomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *list, void *(*f)(void*), void (*del)(void*))
{
	t_list	*new_list;
	t_list	*start_list;

	if (!list || !f)
		return (NULL);
	new_list = ft_lstnew(f(list->content));
	if (!new_list)
		return (NULL);
	start_list = new_list;
	while (list->next)
	{
		list = list->next;
		new_list->next = ft_lstnew(f(list->content));
		if (!(new_list->next))
		{
			ft_lstclear(&start_list, del);
			return (NULL);
		}
		new_list = new_list->next;
	}
	return (start_list);
}
