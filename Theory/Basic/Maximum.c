#include <stdio.h>

int main(void)
{
	int x, y, z;
	int max;

	printf("Please enter three integers: ");
	scanf("%d %d %d", &x, &y, &z);

	max = (((x > y) ? x : y) > z) ? ((x > y) ? x : y) : z;

	printf("%d", max);

	return 0;
}
