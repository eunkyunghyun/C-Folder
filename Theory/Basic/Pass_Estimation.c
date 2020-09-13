#include <stdio.h>

int main(void)
{
	int mathematics, science;

	printf("Please enter your mathematics score: ");
	scanf("%d", &mathematics);

	printf("Please enter your science score: ");
	scanf("%d", &science);

	if (mathematics < 50 && science < 50)
		printf("fail\n");
	else if (mathematics < 50 || science < 50)
		printf("preliminary pass\n");
	else if (mathematics >= 50 && science >= 50)
		printf("pass\n");

	return 0;
}
