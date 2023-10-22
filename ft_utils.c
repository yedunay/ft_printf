/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydunay <ydunay@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 07:50:19 by ydunay            #+#    #+#             */
/*   Updated: 2023/10/22 07:50:20 by ydunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_printstr(char *str)
{
	int i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[i])
		write(1, str[i++], 1);
	return (i);
}

int ft_printnbr(int n)
{
    int len;
    char *num;

    len = 0;
    num = ft_itoa(n);
    len = ft_printstr(num);
    free(num);
    return len;
}