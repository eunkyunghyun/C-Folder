#include <stdio.h>

int main(void)
{
	int c;
	int n;
	int grade[100];
	int sum = 0;
	int count = 0;
	double result;

	scanf_s("%d", &c);

	for (int i = 0; i < c; i++)
	{
		scanf_s("%d", &n);

		for (int j = 0; j < n; j++)
		{
			scanf_s("%d", &grade[j]);
			count += grade[j];
		}

		count = count / n;

		for (int j = 0; j < n; j++)
		{
			if (grade[j] > count)
				sum++;
		}

		result = (double)(sum) / (double)(n) * 100;

		printf("%lf\n", result);
	}

	return 0;
}