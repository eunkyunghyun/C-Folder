#include <stdio.h>
int factorial(int);

int main(void)
{
	int factor;

	scanf("%d", &factor);

	printf("%d", factorial(factor));

	return 0;
}

int factorial(int factor)
{
	int number = 1;
	
	for (int i = factor; i > 0; i--)
	{
		number *= i;
	}

	return number;
