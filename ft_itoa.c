/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydunay <ydunay@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 07:11:51 by ydunay            #+#    #+#             */
/*   Updated: 2023/10/28 11:27:12 by ydunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	int_len(long num)
{
	long int	n;
	int			i;

	i = 0;
	n = num;
	while (n)
	{
		n /= 10;
		i++;
	}
	i += (num == 0 || num < 0);
	return (i);
}

char	*ft_itoa(long n)
{
	char	*result;
	int		len;

	len = int_len(n);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	if (n < 0)
	{
		result[0] = '-';
		n = n * -1;
	}
	result[len] = '\0';
	while (n > 9)
	{
		result[--len] = (n % 10) + '0';
		n /= 10;
	}
	result[--len] = n + '0';
	return (result);
}
