/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:03:15 by marvin            #+#    #+#             */
/*   Updated: 2024/11/14 10:31:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

// Imprime un solo caracter
int	ft_putchar(char c)
{
    return (write(1, &c, 1));
}

// Imprime una cadena
int	ft_putstr(char *str)
{
	int	longitud;

	longitud = 0;
	if (!str)
		str = "(null)";
	while (str[longitud])
	{
		write(1, &str[longitud], 1);
		longitud++;
	}
	return (longitud);
}