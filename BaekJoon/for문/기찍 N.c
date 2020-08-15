#include <stdio.h>

int main(void)
{
	int i;
	int N;

	scanf_s("%d", &N);

	for (i = N; i > 0; i--)
		printf("%d\n", i);

	return 0;
}