#include "libftprintf.h"

/* void	func(char *set, ...)
{
	va_list arg;
	va_start(arg, set);
	printf("%s", set);
	printf("%s\n", va_arg(arg, char*));
	int it = va_arg(arg, int);
	write(1, &it, 1);
	va_end(arg);
} */


int main()
{
	int i=0;
	char c[] = "ismin";
	while(c[i])
	write(1, &c[i++], 1);
	//func("hello", "fdks", 's');
}