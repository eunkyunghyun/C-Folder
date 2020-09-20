#include <stdio.h>

int main(void)
{
	int rep;
	int i = 0;

	printf("Please enter number of repetition: ");
	scanf("%d", &rep);

	while (i < rep)
	{
		++i;
		printf("Hello, World!\n");
	}

	return 0;
}
