/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:03:37 by marvin            #+#    #+#             */
/*   Updated: 2024/11/14 10:37:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Imprime un puntero en formato hexadecimal
int	ft_putptr(void *ptr)
{
	int	longitud;

	longitud = 0;
	if (!ptr)
		return (ft_putstr("(null)"));
	longitud += ft_putstr("0x");
	longitud += ft_puthex((unsigned long)ptr, 'x');
	return (longitud);
}
