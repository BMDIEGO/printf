/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:03:55 by marvin            #+#    #+#             */
/*   Updated: 2024/11/14 10:41:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_putnbr(int n);
int	ft_puthex(unsigned long num, char format);
int	ft_putunbr(unsigned int n);
int	ft_putptr(void *ptr);
int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);

#endif
