/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utoomey <utoomey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 12:32:50 by utoomey           #+#    #+#             */
/*   Updated: 2020/05/07 11:02:52 by utoomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;

	new = (char*)malloc(sizeof(char) * (len + 1));
	if (!new || !s)
		return (NULL);
	*(new + len) = '\0';
	while (len--)
		*(new + len) = *(s + start + len);
	return (new);
}
