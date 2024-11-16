/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:33:40 by maelgini          #+#    #+#             */
/*   Updated: 2024/11/16 15:29:49 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_char(char c)
{
	write(1, &c, 1);
	return (1);
}

void	ft_format(va_list args, const char format)
{
	if (format == "%c")
		ft_char(args);
	if (format == "%s")

	if (format == "%p")

	if (format == "%d")
	
	if (format == "%i")

	if (format == "%u")

	if (format == "%x")

	if (format == "%X")

	if (format == "%%")

	return ;	
}

int ft_printf(const char *format, ...)
{
	va_list	args;
	va_start(args, format);
	
	
}