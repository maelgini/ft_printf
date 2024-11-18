/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:54:11 by maelgini          #+#    #+#             */
/*   Updated: 2024/11/18 15:49:26 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_putnbr(int nb, int size)
{
	unsigned int	n;
	
	size = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		size++;
		n = -nb;
	}
	else
		n = nb;
	if (n > 9)
	{
		size = ft_putnbr(n / 10, size);
		n %= 10;
	}
	ft_putchar(n + '0');
	size++;
	printf("%i ", size);
	return (size);
}

int	ft_unsigned_putnbr(unsigned int u)
{
	if (u > 9)
	{
		ft_unsigned_putnbr(u / 10);
		u %= 10;
	}
	ft_putchar(u + '0');
	return (ft_strlen(ft_itoa(u)));
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (ft_strlen(str));
}
