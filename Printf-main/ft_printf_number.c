/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_number.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:03:31 by marvin            #+#    #+#             */
/*   Updated: 2024/11/14 10:36:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Imprime un número entero sin signo
int	ft_putunbr(unsigned int n)
{
	int		longitud;
	char	num;

	longitud = 0;
	if (n >= 10)
		longitud += ft_putunbr(n / 10);
	num = n % 10 + '0';
	longitud += ft_putchar(num);
	return (longitud);
}

// Imprime un número entero con signo
int	ft_putnbr(int n)
{
	int		longitud;
	char	num;

	longitud = 0;
	if (n < 0)
	{
		longitud += ft_putchar('-');
		n = -n;
	}
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n >= 10)
		longitud += ft_putnbr(n / 10);
	num = n % 10 + '0';
	longitud += ft_putchar(num);
	return (longitud);
}
