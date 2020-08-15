#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int sum = 0;

	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
		sum += i;

	printf("%d\n", sum);

	return 0;
}