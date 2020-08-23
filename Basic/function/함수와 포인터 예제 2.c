#include <stdio.h>
void swap(int x, int y);

int main(void)
{
	int a = 100, b = 200;
	
	swap(&a, &b);

	printf("a = %d, b = %d\n", a, b);

	return 0;
}

void swap(int* px, int* py)
{
	int temp;
	
	temp = *px;
	*px = *py;
	*py = temp;

	return 0;
}