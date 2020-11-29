#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, c = 30;
	int* arrptr[3] = { &a, &b, &c };

	printf("%d %d %d\n", *arrptr[0], *arrptr[1], *arrptr[2]);

	return 0;
}
