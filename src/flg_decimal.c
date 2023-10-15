/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   flg_decimal.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 18:15:21 by seyildir      #+#    #+#                 */
/*   Updated: 2023/01/18 21:08:14 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	flg_decimal(va_list arg)
{
	int	arg_dec;
	int	len;

	len = 0;
	arg_dec = va_arg(arg, int);
	if (arg_dec == -2147483648)
		return (write(1, "-2147483648", 11));
	if (arg_dec < 0)
	{
		write(1, "-", 1);
		arg_dec = -arg_dec;
		len++;
	}
	len += dec_convert(arg_dec);
	return (len);
}
