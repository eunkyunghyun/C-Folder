#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int answer;
	int figure = 0;

	srand(time(NULL));

	answer = rand() % 100 + 1;

	while (figure != answer)
	{
		scanf("%d", &figure);

		if (figure < answer)
		{
			printf("Up\n");
		}
		else if (figure > answer)
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
