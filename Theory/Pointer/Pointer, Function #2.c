#include <stdio.h>

void swap(int a, int b)
{
	int tmp;

	printf("Before: a = %d b = %d\n", a, b);

	tmp = a;
	a = b;
	b = tmp;

	printf("After: a = %d b = %d\n", a, b);
}

int main(void)
{
	int x = 10;
	int y = 20;

	printf("Before: x = %d y = %d\n", x, y);
	
	swap(x, y);

	printf("After: x = %d y = %d\n", x, y);
	
	return 0;
}
