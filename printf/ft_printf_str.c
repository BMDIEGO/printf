#include "ft_printf.h"

int print_str(char *str)
{
    int len = 0;

    while (str[len])
    {
        write(1, &str[len], 1);
        len++;
    }
    return len;
}