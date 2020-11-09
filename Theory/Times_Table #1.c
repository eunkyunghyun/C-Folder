#include <stdio.h>
void multiply(int);

int main(void)
{
	int table;

	scanf("%d", &table);

	multiply(table);

	return 0;
}

void multiply(int table)
{
	for (int i = 1; i <= 9; i++)
	{
		printf("%d × %d = %d\n", table, i, table * i);
	}
}
