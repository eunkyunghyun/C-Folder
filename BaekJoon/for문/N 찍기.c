#include <stdio.h>

int main(void)
{
	int i;
	int n;

	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)
		printf("%d\n", i);

	return 0;
}