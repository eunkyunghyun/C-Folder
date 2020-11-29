#include <stdio.h>

int main(void)
{
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	printf("arr = %p\n", arr);

	for (int i = 0; i < 10; i++)
	{
		printf("&arr[%d] = %p\n", i, &arr[i]);
	}
	return 0;
}
