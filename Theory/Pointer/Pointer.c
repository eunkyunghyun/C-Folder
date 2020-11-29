#include <stdio.h>

int main(void)
{
	int value = 10;
	int* ptr;

	ptr = &value;

	printf("%p %d\n", &value, value);
	printf("%p %d\n", ptr, *ptr);

	return 0;
}
