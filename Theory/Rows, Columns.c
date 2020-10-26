#include <stdio.h>

int main(void)
{
	int arr[3][3] = { { 0 } };
	int rows, cols, values;

	while (1)
	{
		printf("Please enter rows, columns, and values in order: ");
		scanf("%d %d %d", &rows, &cols, &values);
		arr[rows - 1][cols - 1] = values;
		for (int i = 0; i < 3; i++)
		{
			printf("%d %d %d\n", arr[i][0], arr[i][1], arr[i][2]);
		}
	}

	return 0;
}