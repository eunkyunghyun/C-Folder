#include <stdio.h>

int main(void)
{
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	printf("&arr[-1] = %p\n", &arr[-1]);
	printf("&arr[0] = %p\n", &arr[0]);
	printf("&arr[9] = %p\n", &arr[9]);
	printf("&arr[10] = %p\n", &arr[10]);

	return 0;
}
