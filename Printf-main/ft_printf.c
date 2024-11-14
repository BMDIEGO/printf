/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:03:48 by marvin            #+#    #+#             */
/*   Updated: 2024/11/14 10:41:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Esta función maneja los diferentes formatos de impresión.
// Dependiendo del carácter de formato, llama a la función correspondiente para imprimir el argumento.
int	ft_format(va_list args, const char enter_str)
{
	int	longitud;

	longitud = 0;
	if (enter_str == 'c')
		longitud += ft_putchar(va_arg(args, int));

	else if (enter_str == 'd' || enter_str == 'i')
		longitud += ft_putnbr(va_arg(args, int));
	else if (enter_str == 'u')
		longitud += ft_putunbr(va_arg(args, unsigned int));
	else if (enter_str == 's')
		longitud += ft_putstr(va_arg(args, char *));
	else if (enter_str == 'p')
		longitud += ft_putptr(va_arg(args, void *));
	else if (enter_str == 'x' || enter_str == 'X')
		longitud += ft_puthex(va_arg(args, unsigned int), enter_str);
	else if (enter_str == '%')
		longitud += ft_putchar('%');
	return (longitud);
}

int	ft_printf(const char *enter_str, ...)
{
	va_list	args;
	int		i;
	int		longitud;

	i = 0;
	longitud = 0;
	va_start(args, enter_str);
	while (enter_str[i])
	{
		if (enter_str[i] == '%' && enter_str[i + 1])
		{
			longitud += ft_format(args, enter_str[i + 1]);
			i++;
		}
		else
			longitud += ft_putchar(enter_str[i]);
		i++;
	}
	va_end(args);
	return (longitud);
}
