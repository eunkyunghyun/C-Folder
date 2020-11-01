#include <stdio.h>

int main(void)
{
	int arr[10] = { 0 };
	int max, min;

	for (int i = 0; i < 10; i++)
	{
		printf("Please enter an integer: ");
		scanf("%d", &arr[i]);
	}

	max = arr[0];
	min = arr[0];

	for (int i = 1; i < 10; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	printf("%d %d", max, min);

	return 0;
}
