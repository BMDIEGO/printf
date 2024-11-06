#include <stdarg.h>
#include <unistd.h>

// Función auxiliar para imprimir un carácter y actualizar la longitud
void	ft_putchar_len(char c, int *len)
{
    write(1, &c, 1);
    (*len)++;
}

// Función para verificar y manejar el tipo de formato
void	check_format(char format, va_list *args, int *len)
{
    if (format == 's')
        ft_print_string(va_arg(*args, char *), len);
    else if (format == 'd' || format == 'i')
        ft_print_number(va_arg(*args, int), len);
    else if (format == 'u')
        ft_print_unsigned(va_arg(*args, unsigned int), len);
    else if (format == 'x')
        ft_print_hex(va_arg(*args, unsigned int), len, 'x');
    else if (format == 'X')
        ft_print_hex(va_arg(*args, unsigned int), len, 'X');
    else if (format == 'p')
        ft_print_pointer(va_arg(*args, size_t), len);
    else if (format == 'c')
        ft_putchar_len((char)va_arg(*args, int), len);
    else if (format == '%')
        ft_putchar_len('%', len);
}

// Función principal ft_printf simplificada
int	ft_printf(const char *str, ...)
{
    va_list	args;
    int		i;
    int		length;

	i = 0;
	length = 0;
    va_start(args, str);
    while (str[i])
    {
        if (str[i] == '%')
        {
            i++;
            check_format(str[i], &args, &length);
        }
        else
            ft_putchar_len(str[i], &length);
        i++;
    }
    va_end(args);
    return (length);
}
