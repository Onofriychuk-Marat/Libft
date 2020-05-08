/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utoomey <utoomey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 12:23:20 by utoomey           #+#    #+#             */
/*   Updated: 2020/05/07 10:58:19 by utoomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	char	*new;

	num *= size;
	new = malloc(num);
	if (new == NULL)
		return (NULL);
	while (num--)
		*((char*)new + num) = 0;
	return (new);
}
