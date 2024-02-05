/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydunay <ydunay@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 07:50:17 by ydunay            #+#    #+#             */
/*   Updated: 2023/10/28 11:27:07 by ydunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int		ft_printf(const char *str, ...);
int		ft_putstr(char *str);
int		ft_pointer(unsigned long int number, int check);
int		ft_hexadecimal(unsigned int number, char c);
int		ft_print_number(long int number);
char	*ft_itoa(long n);
int		ft_print_unsigned(unsigned int number);

#endif