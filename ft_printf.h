/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:24:24 by ktoivola          #+#    #+#             */
/*   Updated: 2023/11/27 15:29:40 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	read_format(char c, va_list args);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int	puthexptr(uintptr_t address);
int	putnbr(long n);
int	puthex(unsigned long n, char c);

#endif