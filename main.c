/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 19:03:56 by maelgini          #+#    #+#             */
/*   Updated: 2024/11/18 17:06:09 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int main(void)
{
    int my_ret, std_ret;

    // Test 1: Basic string
    my_ret = ft_printf("Hello %s!\n", "world");
    std_ret = printf("Hello %s!\n", "world");
    printf("ft_printf returned: %d | printf returned: %d\n\n", my_ret, std_ret);

    // Test 2: Integers
    my_ret = ft_printf("Number: %d\n", 42);
    std_ret = printf("Number: %d\n", 42);
    printf("ft_printf returned: %d | printf returned: %d\n\n", my_ret, std_ret);

    // Test 3: Hexadecimal
    my_ret = ft_printf("Hex: %x\n", 255);
    std_ret = printf("Hex: %x\n", 255);
    printf("ft_printf returned: %d | printf returned: %d\n\n", my_ret, std_ret);

    // Test 4: Pointers
    int a = 42;
    my_ret = ft_printf("Pointer: %p\n", &a);
    std_ret = printf("Pointer: %p\n", &a);
    printf("ft_printf returned: %d | printf returned: %d\n\n", my_ret, std_ret);

    // Test 5: Unsigned
    my_ret = ft_printf("Unsigned: %u\n", 4294967295U);
    std_ret = printf("Unsigned: %u\n", 4294967295U);
    printf("ft_printf returned: %d | printf returned: %d\n\n", my_ret, std_ret);

    return 0;
}