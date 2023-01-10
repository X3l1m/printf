#include <unistd.h>

int main()
{
	char a[] = "domates";
	write(1, *a, 3);
}