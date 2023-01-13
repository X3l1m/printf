#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "libft/libft.h"


int	chartyp(va_list arg)
{
	char arg_c;
	arg_c = va_arg(arg, int);
	write(1, &arg_c, 1);
	return(1);
}

int	percent(char typef, va_list arg)
{
	if(typef == 'c')
		chartyp(arg);
	return (1);
}

int ft_printf(const char *typef, ...)
{
	va_list arg;
	va_start(arg, typef);
	int	len = 0;
	while (*typef)
	{
		if (*typef == '%')
		{
			if(!*++typef)
				break;
			percent(*typef++, arg);
			write(1, "&", 1);
		}
		write(1, typef++, 1);
		len++;
	}
	va_end(arg);
	return (len);
}

int main()
{
	ft_printf("h%cllo%\0a", 48, 5, 5, 6, 4);
	printf("h%cllo%\0a", 48);
}