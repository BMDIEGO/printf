/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:03:22 by marvin            #+#    #+#             */
/*   Updated: 2024/11/14 10:33:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Imprime un número en formato hexadecimal
int	ft_puthex(unsigned long num, char format)
{
	int		longitud;
	char	*base;

	longitud = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (num > 15)
		longitud += ft_puthex(num / 16, format);
	longitud += ft_putchar(base[num % 16]);
	return (longitud);
}
