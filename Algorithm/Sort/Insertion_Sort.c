#include <stdio.h>

int main(void)
{
	int arr[5] = { 3, -1, 4, 0, 5 };
	int min;

	for (int num = 0; num < 5; num++)
	{
		for (int i = 1; i < 5; i++)
		{
			for (int j = i; j >= 0; j--)
			{
				if (arr[j] > arr[i])
				{
					min = arr[i];
					arr[i] = arr[j];
					arr[j] = min;
				}
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d \n", arr[i]);
	}

	return 0;
}
