#include "ft_printf.h"

static int handle_conversion(char c, va_list args)
{
    // Implementar las conversiones aquí
    return 0;
}

int ft_printf(const char *format, ...)
{
    va_list args;
    int printed_chars = 0;

    va_start(args, format);
    while (*format)
    {
        if (*format == '%' && *(format + 1))
        {
            format++;
            printed_chars += handle_conversion(*format, args);
        }
        else
        {
            write(1, format, 1);
            printed_chars++;
        }
        format++;
    }
    va_end(args);
    return printed_chars;
}