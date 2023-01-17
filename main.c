#include "libftprintf.h"

int main()
{
	char str[] = "deneme";
	int i = ft_printf("%shello\n", str);
	int p = printf("%shello\n", str);
	printf("ft : %d\norj: %d\n", i, p);
}