#include "libftprintf.h"
#include <stdio.h>

int main ()
{
    printf("%*pFIN\n", -16, (void *)0);
    ft_printf("%*pFIN\n", -16, (void *)0);

    printf("\n%*.pFIN\n", -16, (void *)0);
    ft_printf("%*.pFIN\n", -16, (void *)0);

    printf("\n%pFIN\n", (void *)0);
    ft_printf("%pFIN\n", (void *)0);
}