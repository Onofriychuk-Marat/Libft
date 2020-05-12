/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utoomey <utoomey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 12:32:50 by utoomey           #+#    #+#             */
/*   Updated: 2020/05/10 20:31:12 by utoomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	size;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	size = ft_strlen((char*)s);
	if (start > size)
		return (ft_strdup(""));
	if ((size - start) < len)
		len = size - start;
	new = (char*)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	while (i < len)
	{
		*(new + i) = *(s + start + i);
		i++;
	}
	*(new + len) = '\0';
	return (new);
}
