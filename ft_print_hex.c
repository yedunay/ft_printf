/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydunay <ydunay@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 08:30:47 by ydunay            #+#    #+#             */
/*   Updated: 2023/10/22 08:50:09 by ydunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" //ft_putchar_fd icin !!!!
#include <unistd.h>

int	ft_hex_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num)
	{
		len++;
		num /= 16;
	}
	return (len);
}

void	ft_put_hex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_put_hex(num / 16, format);
		ft_put_hex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else if (format == 'x')
			ft_putchar_fd((num - 10 + 'a'), 1);
		if (format == 'X')
			ft_putchar_fd((num - 10 + 'A'), 1);
	}
}

int	ft_print_hex(unsigned int num, const char format)
{
	if (!num)
		return (write(1, "0", 1));
	else
		ft_put_hex(num, format);
	return (ft_hex_len(num));
}
