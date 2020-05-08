/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utoomey <utoomey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 12:30:26 by utoomey           #+#    #+#             */
/*   Updated: 2020/05/08 17:10:21 by utoomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	if ((unsigned char*)src < (unsigned char*)dst)
		while (++i <= len)
			((unsigned char*)dst)[len - i] = ((unsigned char*)src)[len - i];
	else
		while (len-- > 0)
			*((unsigned char*)dst++) = *((unsigned char*)src++);
	return (dst);
}
