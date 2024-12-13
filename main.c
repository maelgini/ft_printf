#include <stdio.h>
#include "ft_printf.h"

int main(void) {
    char            c = 'c';
    char            *s = "yolo";
    int             num = 10, *p = &num;
    int             d = 42;
    int             i = -1234;
    unsigned int    u = 9999999;
    int             x = 2147483647;
    int             X = -2147483647;
    char            *ns = NULL;
    char            *np = NULL;

    int ret_printf, ret_ft_printf;

    printf("------TESTING WITH NO FORMAT------\n");
    ret_printf = printf("Theirs :Hello world\n");
    ret_ft_printf = ft_printf("Mine :Hello world\n");
    printf("Return values - printf: %d, ft_printf: %d\n\n", ret_printf, ret_ft_printf);

    printf("-------TESTING CHARACTER------\n");
    ret_printf = printf("Theirs :%c\n", c);
    ret_ft_printf = ft_printf("Mine :%c\n", c);
    printf("Return values - printf: %d, ft_printf: %d\n\n", ret_printf, ret_ft_printf);

    printf("--------TESTING STRING-------\n");
    ret_printf = printf("Theirs :%s\n", s);
    ret_ft_printf = ft_printf("Mine :%s\n", s);
    printf("Return values - printf: %d, ft_printf: %d\n\n", ret_printf, ret_ft_printf);

    printf("--------TESTING POINTER---------\n");
    ret_printf = printf("Theirs :%p\n", p);
    ret_ft_printf = ft_printf("Mine :%p\n", p);
    printf("Return values - printf: %d, ft_printf: %d\n\n", ret_printf, ret_ft_printf);

    printf("------TESTING INTEGERS D & I------\n");
    ret_printf = printf("Theirs :%i %d\n", i, d);
    ret_ft_printf = ft_printf("Mine :%i %d\n", i, d);
    printf("Return values - printf: %d, ft_printf: %d\n\n", ret_printf, ret_ft_printf);

    printf("--------TESTING UNSIGNED--------\n");
    ret_printf = printf("Theirs :%u\n", u);
    ret_ft_printf = ft_printf("Mine :%u\n", u);
    printf("Return values - printf: %d, ft_printf: %d\n\n", ret_printf, ret_ft_printf);

    printf("------TESTING LOWERCASE HEX------\n");
    ret_printf = printf("Theirs :%x\n", x);
    ret_ft_printf = ft_printf("Mine :%x\n", x);
    printf("Return values - printf: %d, ft_printf: %d\n\n", ret_printf, ret_ft_printf);

    printf("------TESTING UPPERCASE HEX------\n");
    ret_printf = printf("Theirs :%X\n", x);
    ret_ft_printf = ft_printf("Mine :%X\n", x);
    printf("Return values - printf: %d, ft_printf: %d\n\n", ret_printf, ret_ft_printf);

    printf("-------TESTING A NULL PTR------\n");
    ret_printf = printf("Theirs :%p\n", np);
    ret_ft_printf = ft_printf("Mine :%p\n", np);
    printf("Return values - printf: %d, ft_printf: %d\n\n", ret_printf, ret_ft_printf);

    printf("------TESTING A NULL STRING------\n");
    ret_printf = printf("Theirs :%s\n", ns);
    ret_ft_printf = ft_printf("Mine :%s\n", ns);
    printf("Return values - printf: %d, ft_printf: %d\n\n", ret_printf, ret_ft_printf);

    printf("------TESTING INVALID FORMAT------\n");
    ret_printf = printf("Theirs :%q %% bonjour %d\n", 18);
    ret_ft_printf = ft_printf("Mine :%q %% bonjour %d\n", 18);
    printf("Return values - printf: %d, ft_printf: %d\n\n", ret_printf, ret_ft_printf);

    printf("------TESTING INVALID FORMAT 2------\n");
    ret_printf = printf(0);
    ret_ft_printf = ft_printf(0);
    printf("Return values - printf: %d, ft_printf: %d\n\n", ret_printf, ret_ft_printf);

    return 0;
}