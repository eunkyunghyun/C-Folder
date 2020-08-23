#include <stdio.h>

int main(void)
{
	double size = 1.0;
	double org = size;
	int count = 0;

	while (size > org * 0.01)
	{
		size *= 0.5;
		count++;
	}

	printf("%d\n", count);

	return 0;
}
