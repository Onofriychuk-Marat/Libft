/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utoomey <utoomey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 12:30:44 by utoomey           #+#    #+#             */
/*   Updated: 2020/05/07 11:00:20 by utoomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (*dest && size != 0)
	{
		dest++;
		size--;
		i++;
	}
	if (size == 0)
		return (i + ft_strlen((char*)src));
	while (*src)
	{
		if (--size != 0)
			*dest++ = *src;
		src++;
		i++;
	}
	*dest = '\0';
	return (i);
}
