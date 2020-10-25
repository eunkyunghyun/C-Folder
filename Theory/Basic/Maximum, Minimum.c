#include <stdio.h>

int main(void)
{
	int x, y, z;
	int max, min;

	printf("Please enter three integers: ");
	scanf("%d %d %d", &x, &y, &z);

	max = (((x > y) ? x : y) > z) ? ((x > y) ? x : y) : z;
	min = (((x < y) ? x : y) < z) ? ((x < y) ? x : y) : z;

	printf("%d %d\n", max, min);

	return 0;
}
