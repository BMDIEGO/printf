#include "../includes/ft_printf.h"

// Función para imprimir una cadena de texto
void	ft_print_string(char *str, int *len)
{
    int	i;

    i = 0;
    if (!str)
    {
        write(1, "(null)", 6);
        (*len) += 6;
        return (0);
    }
    while (str[i])
    {
        ft_putchar_len(str[i], len);
        i++;
    }
}