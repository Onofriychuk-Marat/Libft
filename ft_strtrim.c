/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utoomey <utoomey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 12:32:47 by utoomey           #+#    #+#             */
/*   Updated: 2020/05/07 11:00:47 by utoomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isletter(char letter, char *str)
{
	while (*str)
		if (*str++ == letter)
			return (1);
	return (0);
}

static int		ft_get_end(char *s1, char *set, int size)
{
	while (ft_isletter(*(s1 + size), set))
		size--;
	return (size + 1);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*new;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (ft_isletter(*((char*)s1 + start), (char*)set))
		start++;
	end = ft_get_end((char*)s1, (char*)set, ft_strlen((char*)s1) - 1);
	if (end - start < 1)
		new = ft_substr("", 0, 0);
	else
		new = ft_substr(s1, (unsigned int)start, (size_t)(end - start));
	return (new);
}
