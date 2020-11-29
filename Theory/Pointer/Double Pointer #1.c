#include <stdio.h>

int main(void)
{
	int value = 10;
	int* ptr = &value;
	int** dptr = &ptr;

	printf("address of pointer = %p\n", &ptr);
	printf("address of pointer = %p\n", dptr);

	return 0;
}
