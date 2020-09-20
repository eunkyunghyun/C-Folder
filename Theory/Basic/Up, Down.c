#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int answer;
	int i = 0;

	srand(time(NULL));

	answer = rand() % 100 + 1;

	while (i != answer)
	{
		scanf("%d", &i);

		if (i < answer)
		{
			printf("Up\n");
		}
		else if (i > answer)
		{
			printf("Down\n");
		}
		else
		{
			printf("Correct\n");
		}
	}

	return 0;
}
