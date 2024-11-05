#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int ft_printf(const char *format, ...);
int print_char(char c);
int print_str(char *str);
// Declaraciones de funciones adicionales para conversiones y manejo de banderas

#endif