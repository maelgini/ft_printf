/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:54:52 by maelgini          #+#    #+#             */
/*   Updated: 2024/11/19 14:50:26 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    int my_ret, std_ret;

    // Test 1: Basic string
    my_ret = ft_printf("Hello %s!\n", "world");
    std_ret = printf("Hello %s!\n", "world");
    printf("ft_printf returned: %d | printf returned: %d\n\n", my_ret, std_ret);

    // Test 2: Integers
    my_ret = ft_printf("%d\n", -1);
    std_ret = printf("%d\n", -1);
    printf("ft_printf returned: %d | printf returned: %d\n\n", my_ret, std_ret);

    // Test 3: Hexadecimal
	int w = -2147483648;
    my_ret = ft_printf("Hex: %x\n", w);
    std_ret = printf("Hex: %x\n", w);
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
