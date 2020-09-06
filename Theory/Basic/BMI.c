#include <stdio.h>

int main(void)
{
	double weight, height;

	printf("enter the weight: ");
	scanf("%lf", &weight);

	printf("enter the height");
	scanf("%lf", &height);

	printf("BMI = %lf, %lf\n", weight, height);

	return 0;
}