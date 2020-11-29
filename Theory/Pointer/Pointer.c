#include <stdio.h>

int main(void)
{
	int x = 10;
	int* ptr;

	ptr = &x;

	printf("%p %d\n", &x, x);
	printf("%p %d\n", ptr, *ptr);

	return 0;
}
