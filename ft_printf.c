/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:33:40 by maelgini          #+#    #+#             */
/*   Updated: 2024/11/18 15:48:19 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_format(va_list args, const char format)
{
	int	print_len;

	print_len = 0;
	if (format == 'c')
		print_len += ft_printchar(va_arg(args, int));
	if (format == 's')
		print_len += ft_putstr(va_arg(args, char *));
	if (format == 'p')
		print_len += ft_putstr_hex(va_arg(args, void *));
	if (format == 'd' || format == 'i')
		print_len += ft_putnbr(va_arg(args, int), 0);
	if (format == 'u')
		print_len += ft_unsigned_putnbr(va_arg(args, unsigned int));
	if (format == 'x' || format == 'X')
		print_len += ft_putnbr_hex(va_arg(args, unsigned int), format);
	if (format == '%')
	{
		print_len += 1;
		write(1, "%", 1);
	}
	return (print_len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		total_len;
	va_list	args;

	i = 0;
	total_len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			total_len += ft_format(args, format[i + 1]);
			i++;
		}
		else
			total_len += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (total_len);
}
