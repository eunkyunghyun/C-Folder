#include <stdio.h>

int main(void)
{
	int rep;
	int i = 0;

	printf("Please enter number of repetation: ");
	scanf("%d", &rep);

	do {
		printf("Hello, World!\n");
		i++;
	} while (i < rep);

	return 0;
}
