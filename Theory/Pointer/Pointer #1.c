#include <stdio.h>

int main(void)
{
	int x = 20;
	int* p1 = &x;
	int* p2 = p1;

	(*p1)++;
	(*p2)--;

	printf("%d", x);

	return 0;
}
