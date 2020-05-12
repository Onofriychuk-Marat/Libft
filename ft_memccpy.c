/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utoomey <utoomey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 12:30:11 by utoomey           #+#    #+#             */
/*   Updated: 2020/05/09 12:21:18 by utoomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *source, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((char *)dest + i) = *((char*)source + i);
		i++;
		if (((unsigned char*)dest)[i - 1] == (unsigned char)c)
			return ((unsigned char*)dest + i);
	}
	return (NULL);
}
