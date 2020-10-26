#include <stdio.h>

int main(void)
{
	int day;

	printf("Please enter today: ");
	scanf("%d", &day);

	switch (day % 7)
	{
	case 5:
		printf("Sunday\n");
		break;
	case 6:
		printf("Monday\n");
		break;
	case 0:
		printf("Tuesday\n");
		break;
	case 1:
		printf("Wednesday\n");
		break;
	case 2:
		printf("Thursday\n");
		break;
	case 3:
		printf("Friday\n");
		break;
	case 4:
		printf("Saturday\n");
		break;
	default:
		printf("Non - existent day of the week\n");
		break;
}

	return 0;
}
