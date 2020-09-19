#include <stdio.h>

int main(void)
{
	int num;
	int count;
	int sum = 0;
	int arr[100] = { 0, };

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num);
		arr[i] = num % 42;
	}

	for (int i = 0; i < 10; i++)
	{
		count = arr[i];
		for (int j = i + 1; j < 10; j++)
		{
			if (count == arr[j])
				arr[j] = -1;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] != -1)
			sum++;
	}

	printf("%d", sum);

	return 0;
}
