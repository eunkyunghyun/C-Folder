#include <stdio.h>

int main(void)
{
	int arr[3][3] = { 0 };

	printf("arr = %p\n", arr);
	printf("arr[0] = %p\n", arr[0]);
	printf("arr[1] = %p\n", arr[1]);
	printf("arr[2] = %p\n", arr[2]);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
		}
	}

	return 0;
}
