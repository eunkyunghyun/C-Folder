#include <stdio.h>

int main(void)
{
	double weight, height;

	printf("Please enter the weight: ");
	scanf("%lf", &weight);

	printf("Please enter the height: ");
	scanf("%lf", &height);

	printf("BMI = %lf\n", weight / height * height);

	return 0;
}
