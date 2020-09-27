#include <stdio.h>

int main(void)
{
	int product;

	scanf("%d", &product);

	for (int i = 1; i < 10; i++)
	{
		printf("%d × %d = %d\n", product, i, product * i);
	}

	return 0;
}
