/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   flg_char.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/17 17:58:18 by seyildir      #+#    #+#                 */
/*   Updated: 2023/01/17 18:36:32 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	flg_char(va_list arg)
{
	char arg_c;
	arg_c = va_arg(arg, int);
	write(1, &arg_c, 1);
	return(1);
}