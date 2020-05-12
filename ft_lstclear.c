/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utoomey <utoomey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 17:02:02 by utoomey           #+#    #+#             */
/*   Updated: 2020/05/09 17:58:09 by utoomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **list, void (*del)(void*))
{
	t_list	*t;

	if (!list || !del)
		return ;
	while (*list)
	{
		t = (*list)->next;
		del((*list)->content);
		free(*list);
		*list = t;
	}
}
