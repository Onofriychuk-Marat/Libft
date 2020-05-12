/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utoomey <utoomey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 12:29:32 by utoomey           #+#    #+#             */
/*   Updated: 2020/05/08 17:19:04 by utoomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int	size;

	size = ft_strlen((char*)str);
	while (size != -1)
	{
		if (*(str + size) == ch)
			return ((char*)(str + size));
		size--;
	}
	return (NULL);
}
