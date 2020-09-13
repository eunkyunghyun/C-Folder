#include <stdio.h>

int main(void)
{
	int value;

	printf("Please enter one integer: ");
	scanf("%d", &value);

	if (value < 0) {
		value = -value;
	}
	
	printf("%d\n", value);

	return 0;
}

#include <stdio.h>

int main(void)
{
	int value;

	printf("Please enter one integer: ");
	scanf("%d", &value);

	printf("absolute value = %d\n", (value > 0) ? value : -value);

	return 0;
}
