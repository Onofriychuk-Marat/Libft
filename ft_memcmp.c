/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utoomey <utoomey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 12:30:19 by utoomey           #+#    #+#             */
/*   Updated: 2020/05/08 17:17:13 by utoomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *one, const void *two, size_t num)
{
	while (num--)
		if (*((unsigned char*)one++) != *((unsigned char*)two++))
			return (*((unsigned char*)one - 1) - *((unsigned char*)two - 1));
	return (0);
}
