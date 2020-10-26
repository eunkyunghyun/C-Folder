#include <stdio.h>

int main(void)
{
	int width, height;

	printf("Please enter width and height: ");
	scanf("%d %d", &width, &height);

	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < height; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
