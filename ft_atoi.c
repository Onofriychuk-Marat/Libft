/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utoomey <utoomey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 12:28:21 by utoomey           #+#    #+#             */
/*   Updated: 2020/05/07 10:58:12 by utoomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str == '\t' || *str == '\f' || *str == '\n'
				|| *str == ' ' || *str == '\r' || *str == '\v')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (ft_isdigit(*str))
	{
		if ((res >= 214748364 && (*str - '0') > 8 && sign == -1))
			return (0);
		if (res >= 214748364 && (*str - '0') >= 8 && sign == 1)
			return (-1);
		res = res * 10 + (*str++ - '0');
	}
	return (res * sign);
}
