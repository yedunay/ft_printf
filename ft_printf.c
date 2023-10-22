/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydunay <ydunay@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 07:50:14 by ydunay            #+#    #+#             */
/*   Updated: 2023/10/22 08:55:16 by ydunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

static int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

static int	ft_printpercent(void)
{
	write(1, "%", 1);
	return (1);
}

int	ft_formats(va_list arg, const char format)
{
	int	print_length;

	print_length = 0;
	if (format == 'c')
		print_length += ft_printchar(va_arg(arg, int));
	if (format == 's')
		print_length += ft_printstr(va_arg(arg, char *));
	if (format == 'p')
		print_length += ft_print_ptr(va_arg(arg, unsigned long long));
	if (format == 'd' || format == 'i')
		print_length += ft_printnbr(va_arg(arg, int));
	if (format == 'u')
		print_length += ft_print_unsigned(va_arg(arg, int));
	if (format == 'x' || format == 'X')
		print_length += ft_print_hex(va_arg(arg, unsigned int), format);
	if (format == '%')
		print_length += ft_printpercent();
	return (print_length);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	arg;
	int		print_length;

	i = 0;
	print_length = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_length += ft_formats(arg, str[i + 1]);
			i++;
		}
		else
			print_length += ft_printchar(str[i]);
		i++;
	}
	va_end(arg);
	return (print_length);
}
