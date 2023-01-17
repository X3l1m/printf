/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   flg_string.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/17 17:27:56 by seyildir      #+#    #+#                 */
/*   Updated: 2023/01/17 19:05:39 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	flg_string(va_list arg)
{
	int len;
	char *arg_s;

	len = 0;
	arg_s = va_arg(arg, char *);
	while (arg_s[len])
		write(1, &arg_s[len++], 1);
	return (len);
}
