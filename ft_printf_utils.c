/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:54:11 by maelgini          #+#    #+#             */
/*   Updated: 2024/11/18 17:28:11 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

int	ft_unsigned_putnbr(unsigned int u, int size)
{
	size = 0;
	
	if (u > 9)
	{
		size = ft_unsigned_putnbr(u / 10, size);
		u %= 10;
	}
	ft_putchar(u + '0');
	size++;
	return (size);
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
