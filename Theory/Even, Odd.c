#include <stdio.h>

int main(void)
{
	int arr[10];
	int even = 0;
	int odd = 0;

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		printf("Please enter an element: ");
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		if (arr[i] % 2 == 0)
		{
			even += arr[i];
		}
		else
		{
			odd += arr[i];
		}
	}

	printf("even = %d\n", even);
	printf("odd = %d\n", odd);

	return 0;
}
