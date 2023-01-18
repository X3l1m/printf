/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   flg_pointer.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 19:56:56 by seyildir      #+#    #+#                 */
/*   Updated: 2023/01/18 21:09:16 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	flg_pointer(va_list arg)
{
	unsigned long int	arg_point;

	arg_point = va_arg(arg, unsigned long int);
	if (!arg_point)
		return (write(1, "0x0", 3));
	return (write(1, "0x", 2) + hex_convert(arg_point, 'p'));
}
