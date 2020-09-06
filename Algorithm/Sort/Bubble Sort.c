#include <stdio.h>

int main(void)
{
	int arr[5] = { 16, 2, 36, 0, 1 };
	int max;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				max = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = max;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d \n", arr[i]);
	}

	return 0;
}