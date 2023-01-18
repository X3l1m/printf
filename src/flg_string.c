/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   flg_string.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/17 17:27:56 by seyildir      #+#    #+#                 */
/*   Updated: 2023/01/18 21:10:06 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	flg_string(va_list arg)
{
	int		len;
	char	*arg_s;

	len = 0;
	arg_s = va_arg(arg, char *);
	if (!arg_s)
		return (write(1, "(null)", 6));
	while (arg_s[len])
		len++;
	write(1, arg_s, len);
	return (len);
}
