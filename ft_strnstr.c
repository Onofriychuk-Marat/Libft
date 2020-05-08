/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utoomey <utoomey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 12:29:29 by utoomey           #+#    #+#             */
/*   Updated: 2020/05/08 17:11:31 by utoomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	k;

	if (*find == '\0')
		return ((char*)str);
	i = -1;
	while (++i < len)
	{
		k = 0;
		while (*(str + i + k) == *(find + k) &&
				(i + k) < len && *(find + k) && *(str + i + k))
			k++;
		if (*(find + k) == '\0')
			return ((char*)str + i);
	}
	return (NULL);
}
