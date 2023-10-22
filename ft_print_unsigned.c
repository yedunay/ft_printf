/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydunay <ydunay@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 07:50:09 by ydunay            #+#    #+#             */
/*   Updated: 2023/10/22 08:55:50 by ydunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_printf.h"

static int	int_len(int i)
{
	size_t	len;

	len = 1;
	while (i > 9 || i < -9)
	{
		i /= 10;
		len++;
	}
	return (len);
}

static char	*ft_uitoa(int n)
{
	char	*result;
	int		len;

	len = int_len(n);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (n > 9)
	{
		result[len - 1] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	result[len - 1] = n + '0';
	result[len] = '\0';
	return (result);
}

int    ft_print_unsigned(unsigned int n)
{
	int		print_length;
	char	*num;

	print_length = 0;
	if (!n)
		print_length += write(1, "0", 1);
			// WRITE FONKSIYONU BASARILI BIR YAZMA DURUMUNDA YAZILAN BAYT SAYISINI VE HATA DURUMUNDA DA -1 DONDURUR !
	else
	{
		num = ft_uitoa(n);
		print_length += ft_printstr(num);
		free(num);
	}
	return (print_length);
}
