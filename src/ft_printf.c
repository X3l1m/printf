/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 10:37:31 by seyildir      #+#    #+#                 */
/*   Updated: 2023/01/18 21:17:15 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ptf_percent(char typef, va_list arg)
{
	int	len;

	len = 0;
	if (typef == 'c')
		len += flg_char(arg);
	else if (typef == 's')
		len += flg_string(arg);
	else if (typef == 'p')
		len += flg_pointer(arg);
	else if (typef == 'd' || typef == 'i')
		len += flg_decimal(arg);
	else if (typef == 'u')
		len += flg_unsigned(arg);
	else if (typef == 'X' || typef == 'x')
		len += flg_hexa(arg, typef);
	else if (typef == '%')
		len += write(1, "%", 1);
	return (len);
}

int	ft_printf(const char *typef, ...)
{
	va_list	arg;
	int		len;

	len = 0;
	va_start(arg, typef);
	while (*typef)
	{
		while (*typef == '%')
		{
			if (!*++typef)
				break ;
			len += ptf_percent(*typef, arg);
			if (!*++typef)
				break ;
		}
		if (!*typef)
			break ;
		write(1, typef++, 1);
		len++;
	}
	va_end(arg);
	return (len);
}
