#include "ft_printf.h"

static int handle_conversion(char c, va_list args)
{
    if (c == 'c')
        return print_char(va_arg(args, int));
    else if (c == 's')
        return print_str(va_arg(args, char *));
    // Agregar más conversiones aquí
    return 0;
}

static int handle_flags(const char **format, va_list args)
{
    // Implementar manejo de banderas, anchuras, precisiones, etc.
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
            printed_chars += handle_flags(&format, args);
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