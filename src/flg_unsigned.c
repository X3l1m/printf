/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   flg_unsigned.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 21:10:31 by seyildir      #+#    #+#                 */
/*   Updated: 2023/01/18 21:10:35 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	flg_unsigned(va_list arg)
{
	unsigned int	arg_uns;

	arg_uns = va_arg(arg, unsigned int);
	return (dec_convert(arg_uns));
}
