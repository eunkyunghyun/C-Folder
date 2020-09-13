#include <stdio.h>

int main(void)
{
	int value;

	printf("Please enter one integer: ");
	scanf("%d", &value);

	if (value < 0)
		value = -value;
	
	printf("%d\n", value);

	return 0;
}
