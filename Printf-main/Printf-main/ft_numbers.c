#include <unistd.h>

// Función para imprimir un carácter y actualizar longitud
void	ft_putchar_len(char c, int *len)
{
    write(1, &c, 1);
    (*len)++;
}

// Función para imprimir números enteros
void	ft_print_number(int num, int *len)
{
    if (num == -2147483648)
    {
        write(1, "-2147483648", 11);
        (*len) = (*len) + 11;
        return(0);
    }
    if (num < 0)
    {
        ft_putchar_len('-', len);
        num = -num;
    }
    if (num > 9)
        ft_print_number(num / 10, len);
    ft_putchar_len((num % 10) + '0', len);
}

// Función para imprimir punteros
void	ft_print_pointer(size_t ptr, int *len)
{
    char	*hex;
    char	str[25];
    int		i = 0;

    hex = "0123456789abcdef";
    write(1, "0x", 2);
    (*len) = (*len) + 2;
    if (ptr == 0)
    {
        ft_putchar_len('0', len);
        return;
    }
    while (ptr != 0)
    {
        str[i] = hex[ptr % 16];
        ptr = ptr / 16;
        i++;
    }
    while (i--)
        ft_putchar_len(str[i], len);
}

// Función para imprimir ints sin signo
void	ft_print_unsigned(unsigned int u, int *len)
{
    if (u > 9)
        ft_print_unsigned(u / 10, len);
    ft_putchar_len((u % 10) + '0', len);
}

// Función para imprimir en hexadecimal
void	ft_print_hex(unsigned int x, int *len, char format)
{
    char	*hex; 
    char	str[25];
    int		i = 0;

    hex = (format == 'X') ? "0123456789ABCDEF" : "0123456789abcdef";
    if (x == 0)
    {
        ft_putchar_len('0', len);
        return(0);
    }
    while (x != 0)
    {
        str[i] = hex[x % 16];
        x = x / 16;
        i++;
    }
    while (i--)
        ft_putchar_len(str[i], len);
}
