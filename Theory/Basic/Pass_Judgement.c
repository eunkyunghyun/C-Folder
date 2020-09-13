#include <stdio.h>

int main(void)
{
	int mathematics, science;

	printf("Please enter your mathematics score: ");
	scanf("%d", &mathematics);

	printf("Please enter your science score: ");
	scanf("%d", &science);

	if (mathematics < 50 && science < 50)
		printf("fail");
	else if (mathematics < 50 || science < 50)
		printf("preliminary pass");
	else if (mathematics >= 50 && science >= 50)
		printf("pass");

	return 0;
}
