#include <stdio.h>

int main(void)
{
	int value = 10;
	int* ptr = &value;

	printf("address of value = %p\n", ptr);
	printf("address of pointer = %p\n", &ptr);

	return 0;
}
