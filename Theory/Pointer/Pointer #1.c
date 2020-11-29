#include <stdio.h>

int main(void)
{
	int value = 20;
	int* p1 = &value;
	int* p2 = p1;

	(*p1)++;
	(*p2)--;

	printf("%d", value);

	return 0;
}
