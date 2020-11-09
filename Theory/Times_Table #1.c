#include <stdio.h>
void multiply(int);

int main(void)
{
	int number;
	
	printf("Please enter the number: ");
	scanf("%d", &number);

	multiply(number);

	return 0;
}

void multiply(int number)
{
	for (int i = 1; i <= 9; i++)
	{
		printf("%d × %d = %d\n", number, i, number * i);
	}
}
