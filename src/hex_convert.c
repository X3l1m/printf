/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   hex_convert.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 19:56:19 by seyildir      #+#    #+#                 */
/*   Updated: 2023/01/18 21:18:15 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	hex_convert(unsigned long int arg, char typef)
{
	int	i;
	int	len;

	len = 0;
	i = arg % 16;
	if (arg >= 16)
		len += hex_convert(arg / 16, typef);
	if (i < 10)
		i += 48;
	else
	{
		if (typef == 'X')
			i += 55;
		else
			i += 87;
	}
	len += write(1, &i, 1);
	return (len);
}
