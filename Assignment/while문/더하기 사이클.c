#include <stdio.h>

int main(void)
{
	int N;
	int i = 1;
	int sum1, sum2;

	scanf_s("%d", &N);

	sum1 = (N % 10 * 10) + ((N / 10 + N % 10) % 10);

	while (1)
	{
		sum2 = (sum1 % 10 * 10) + ((sum1 / 10 + sum1 % 10) % 10);
		sum1 = sum2;
		i++;
		if (sum2 == N)
			break;
	}

	printf("%d", i);
	
	return 0;
}