/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 19:03:56 by maelgini          #+#    #+#             */
/*   Updated: 2024/11/18 15:51:05 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int main(void)
{
    int my_ret, std_ret;

    // Test 3: Hexadecimal
    my_ret = ft_printf("Hex: %x\n", 255);
    std_ret = printf("Hex: %x\n", 255);
    printf("ft_printf returned: %d | printf returned: %d\n\n", my_ret, std_ret);

    return 0;
}