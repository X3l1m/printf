#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "libft/libft.h"


int ft_printf(const char *typef, ...)
{
	while (*typef)
	{
		if (*typef == '%')
		{
			write(1, "bok", 3);
		}
		
		write(1, typef++, 1);
	}


	int lenprint = 1;
	return (lenprint);
}

int main()
{
	ft_printf("h%ello", 2, 5, 5, 6, 4);
	//printf("%C", 'k');
}