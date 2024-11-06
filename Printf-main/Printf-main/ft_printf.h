#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// Librerías estándar de C
# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

// Prototipos de funciones

void	ft_putchar_len(char c, int *len);
void	ft_print_string(char *str, int *len);

void	ft_print_number(int num, int *len);
void	ft_print_hex(unsigned int x, int *len, char format);
void	ft_print_unsigned(unsigned int u, int *len);
void	ft_print_pointer(size_t ptr, int *len);

int		ft_printf(const char *str, ...);

#endif