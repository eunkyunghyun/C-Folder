#include <stdio.h>

int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* ptr = arr;

	for (int i = 0; i < 5; i++)
	{
		printf("&arr[%d] = %p\n", i, &arr[i]);
		printf("pointer + %d = %p\n", i, ptr + i);
	}

	return 0;
}
