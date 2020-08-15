#include <stdio.h>
#include <string.h>

int main(void)
{
	int n;
	int sum, count;
	char q[1000];
	
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%s", &q);
		sum = 0;
		count = 0;
		for (int j = 0; j < strlen(q); j++)
		{
			if (q[j] == 'O')
				count += 1;
			else if (q[j] == 'X')
				count = 0;
			sum += count;
		}
		printf("%d\n", sum);
	}

	return 0;
}