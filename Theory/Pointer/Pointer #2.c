#include <stdio.h>

int main(void)
{
	int value = 10;
	int* ptr = &value;

	printf("pointer = %p\n", ptr);
	ptr++;

	printf("pointer = %p\n", ptr);
	ptr--;

	printf("pointer = %p\n", ptr);

	return 0;
}
