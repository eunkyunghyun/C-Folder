#include <stdio.h>

int main(void)
{
	double radius;
	double circumference;
	double area;

	printf("Please enter the radius: ");
	scanf("%lf", &radius);

	circumference = 2.0 * 3.14 * radius;
	area = 3.14 * radius * radius;

	printf("circumference = %lf\n", circumference);
	printf("area = %lf\n", area);

	return 0;
}
