#include "../libftprintf.h"

int	ptf_percent(char typef, va_list arg)
{
	size_t	len = 0;

	if(typef == 'c')
		len += flg_char(arg);
	else if(typef == 's')
		len += flg_string(arg);
	// if(typef == 'p')
	// 	len += flg_pointer(arg)
	// if(typef == 'd')
	// 	len += flg_decimal(arg);
	// if(typef == 'i')
	// 	len += flg_integer(arg);
	// if(typef == 'u')
	// 	len += flg_unsigned(arg);
	// if(typef == 'x')
	// 	len += flg_hexadecimal_low(arg);
	// if(typef == 'X')
	// 	len += flg_hexadecimal_up(arg);
	else if(typef == '%')
	{
		write(1, "%", 1);
		len++;
	}
	return (len);
}

int ft_printf(const char *typef, ...)
{
	va_list arg;
	va_start(arg, typef);
	size_t	len = 0;
	while (*typef)
	{
		if (*typef == '%')
		{
			if(!*++typef)
				break;
			len += ptf_percent(*typef, arg);
			if(!*++typef)
				break;
		}
		write(1, typef++, 1);
		len++;
	}
	va_end(arg);
	return (len);
}
