/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   dec_convert.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 19:01:57 by seyildir      #+#    #+#                 */
/*   Updated: 2023/01/18 21:02:32 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	dec_convert(unsigned long int dec)
{
	unsigned long int	i;
	int					len;

	len = 0;
	i = dec % 10;
	if (dec >= 10)
		len += dec_convert(dec / 10);
	i += 48;
	len += write(1, &i, 1);
	return (len);
}
