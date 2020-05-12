/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utoomey <utoomey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 12:32:27 by utoomey           #+#    #+#             */
/*   Updated: 2020/05/09 12:00:54 by utoomey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_putnbr(int n, char *str)
{
	if (n == -2147483648)
	{
		ft_putnbr(147483648, str);
		ft_putnbr(2, str - 9);
		return ;
	}
	if (n < 0)
		n *= -1;
	if (n >= 10)
		ft_putnbr(n / 10, str - 1);
	*str = '0' + n % 10;
}

char			*ft_itoa(int n)
{
	int		size;
	int		copy;
	char	*new;

	copy = n;
	size = 0;
	while (copy)
	{
		copy /= 10;
		size++;
	}
	if (n <= 0)
		size++;
	new = (char*)malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	*(new + size) = '\0';
	if (n < 0)
		*new = '-';
	ft_putnbr(n, (new + --size));
	return (new);
}
