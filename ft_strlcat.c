/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utoomey <utoomey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 12:30:44 by utoomey           #+#    #+#             */
/*   Updated: 2020/05/11 16:46:28 by utoomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	size_dest;
	size_t	size_res;

	size_dest = ft_strlen(dest);
	if (size < size_dest)
		return (size + ft_strlen((char*)src));
	size_res = size_dest + ft_strlen((char*)src);
	if (size > 0)
	{
		while (*src && size_dest < size - 1)
			dest[size_dest++] = *src++;
		dest[size_dest] = '\0';
	}
	return (size_res);
}
