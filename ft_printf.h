/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:56:50 by maelgini          #+#    #+#             */
/*   Updated: 2024/12/09 12:57:12 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

void	ft_putchar(char c);
int		ft_putnbr_hex(unsigned int n, int size, char format);
int		ft_putstr_hex(void *ptr);
int		ft_format(va_list args, const char format);
int		ft_char(char c);
int		ft_printf(const char *format, ...);
int		ft_putnbr(int nb, int size);
int		ft_putstr(char *str);
int		ft_unsigned_putnbr(unsigned int u, int size);

#endif