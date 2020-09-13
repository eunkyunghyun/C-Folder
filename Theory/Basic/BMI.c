#include <stdio.h>

int main(void)
{
	double weight, height;

	printf("Please enter the weight: ");
	scanf("%lf", &weight);

	printf("Please enter the height: ");
	scanf("%lf", &height);

	printf("BMI = %lf, %lf\n", weight, height);

	return 0;
}
