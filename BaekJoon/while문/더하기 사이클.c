#include <stdio.h>

int main(void)
{
	int n;
	int i = 1;
	int sum1, sum2;

	scanf_s("%d", &n);

	sum1 = (n % 10 * 10) + ((n / 10 + n % 10) % 10);

	while (1)
	{
		sum2 = (sum1 % 10 * 10) + ((sum1 / 10 + sum1 % 10) % 10);
		sum1 = sum2;
		i++;
		if (sum2 == n)
			break;
	}

	if (n == 0)
		printf("%d", 1);
	else
		printf("%d", i);

	return 0;
}
