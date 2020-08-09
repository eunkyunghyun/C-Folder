#include <stdio.h>

int main(void)
{
	int T, i;
	int A, B;

	scanf_s("%d", &T);

	for (i = 0; i < T; i++)
	{
		scanf_s("%d %d", &A, &B);
		printf("Case #%d: %d + %d = %d\n", i + 1, A, B, A + B);
	}

	return 0;
}