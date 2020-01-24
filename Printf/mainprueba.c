#include "libftprintf.h"
#include <stdio.h>

int main ()
{
    printf("ORI: %p\n", (void *)0xe70d68e24);
    ft_printf("MIO:%p\n", (void *)0xe70d68e24);
}