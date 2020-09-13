#include <stdio.h>

int main(void)
{
	double radius;

	printf("Please enter the radius: ");
	scanf("%lf", &radius);

	printf("volume = %f\n", 4 / 3 * 3.14 * radius * radius * radius);

	return 0;
}
