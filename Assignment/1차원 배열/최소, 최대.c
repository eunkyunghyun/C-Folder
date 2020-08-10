#include <stdio.h>

int main(void)
{
	int n;
	int max, min;
	int num[100];

	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
		scanf_s("%d", &num[i]);

	max = num[0];
	min = num[0];

	for (int i = 1; i < n; i++)
	{
		if (num[i] > max)
			max = num[i];

		if (num[i] < min)
			min = num[i];
	}

	printf("%d %d", min, max);

	return 0;
}