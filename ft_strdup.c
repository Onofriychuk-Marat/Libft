/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utoomey <utoomey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 12:30:41 by utoomey           #+#    #+#             */
/*   Updated: 2020/05/08 17:18:15 by utoomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *s)
{
	int		i;
	char	*new;

	i = -1;
	new = (char*)malloc(sizeof(char) * (ft_strlen((char*)s) + 1));
	if (!new)
		return (NULL);
	while (*(s + ++i))
		*(new + i) = *(s + i);
	*(new + i) = '\0';
	return (new);
}
