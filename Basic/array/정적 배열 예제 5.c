#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20

int main(void)
{
	int i, number;
	int value[SIZE];

	srand(time(NULL));

	for (i = 0; i < SIZE; i++)
		value[i] = rand() % 100;

	number = value[0];

	for (i = 1; i < SIZE; i++)
	{
		if (value[i] < number)
			number = value[i];
	}
	
	printf("ÃÖ¼Ò°ªÀº %dÀÔ´Ï´Ù.\n", number);

	return 0;
}
