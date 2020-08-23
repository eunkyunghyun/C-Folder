#include <stdio.h>
void swap(int x, int y);

int main(void)
{
	int a = 100, b = 200;

	swap(a, b);

	printf("a = %d, b = %d\n", a, b);

	return 0;
}

void swap(int x, int y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;

	return 0;
}
*/