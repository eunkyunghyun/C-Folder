/* #include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5

int main(void)
{
	int i;
	int grade[SIZE];

	srand(time(NULL));
	
	for (i = 0; i < SIZE; i++)
	{
		grade[i] = rand() % 100;
		printf("grade[%d] = %d\n", i, grade[i]);
	}

	return 0;
}
*/