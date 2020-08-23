#include <stdio.h>

int main(void)
{
	int num;
	int count;
	int sum = 0;
	int num1[100] = { 0, };

	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &num);
		num1[i] = num % 42;
	}

	for (int i = 0; i < 10; i++)
	{
		count = num1[i];
		for (int j = i + 1; j < 10; j++)
		{
			if (count == num1[j])
				num1[j] = -1;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (num1[i] != -1)
			sum++;
	}

	printf("%d", sum);

	return 0;
}
