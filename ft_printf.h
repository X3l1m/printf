/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/17 16:22:03 by seyildir      #+#    #+#                 */
/*   Updated: 2023/01/18 21:06:17 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printf(const char *typef, ...);
int	flg_char(va_list arg);
int	flg_string(va_list arg);
int	flg_hexa(va_list arg, char typef);
int	flg_decimal(va_list arg);
int	dec_convert(unsigned long int dec);
int	flg_unsigned(va_list arg);
int	hex_convert(unsigned long int arg, char typef);
int	flg_pointer(va_list arg);

#endif