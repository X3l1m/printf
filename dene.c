#include <unistd.h>
#include <stdarg.h>
#include "libft/libft.h"

void	func(char *set, ...)
{
	va_list arg;
	va_start(arg, set);
	printf("%s", set);
	printf("%s\n", va_arg(arg, char*));
	int it = va_arg(arg, int);
	write(1, &it, 1);
	va_end(arg);
}


int main()
{
	//char hello[] = "hella";
	func("hello", "fdks", 's');
}