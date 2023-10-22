/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydunay <ydunay@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 07:50:17 by ydunay            #+#    #+#             */
/*   Updated: 2023/10/22 08:53:56 by ydunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

char	*ft_itoa(int n);
void	ft_putchar_fd(int c, int fd);
int ft_print_unsigned(unsigned int n);
int	ft_print_ptr(unsigned long long ptr);
int	ft_printstr(char *str);
int	ft_printnbr(int n);
int	ft_print_hex(unsigned int num, const char format);





#endif