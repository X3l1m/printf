/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   flg_hexa.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 16:20:41 by seyildir      #+#    #+#                 */
/*   Updated: 2023/01/18 21:08:47 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	flg_hexa(va_list arg, char typef)
{
	unsigned int	arg_hex;

	arg_hex = va_arg(arg, unsigned int);
	return (hex_convert(arg_hex, typef));
}
