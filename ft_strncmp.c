/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utoomey <utoomey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 12:30:53 by utoomey           #+#    #+#             */
/*   Updated: 2020/05/08 17:11:27 by utoomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while ((*str1 || *str2) && n--)
		if (*str1++ != *str2++)
		{
			if (ft_isascii(*(str1 - 1)) && ft_isascii(*(str2 - 1)))
				return (*(str1 - 1) - *(str2 - 1));
			else
				return (1);
		}
	return (0);
}
