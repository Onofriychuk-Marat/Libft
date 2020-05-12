/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utoomey <utoomey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 12:29:29 by utoomey           #+#    #+#             */
/*   Updated: 2020/05/09 11:44:58 by utoomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	k;

	if (*find == '\0')
		return ((char*)str);
	i = 0;
	while (i < len && *(str + i))
	{
		k = 0;
		while (*(str + i + k) == *(find + k) &&
				(i + k) < len && *(find + k) && *(str + i + k))
			k++;
		if (*(find + k) == '\0')
			return ((char*)str + i);
		i++;
	}
	return (NULL);
}
