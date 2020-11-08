#include <stdio.h>

int main(void)
{
	int decimal;
	int index = 0;
	int arr[100] = { 0 };

	scanf("%d", &decimal);

	while (1)
	{
		arr[index] = decimal % 16;
		decimal /= 16;
		index++;
		if (decimal % 16 == 0)
		{
			break;
		}
	}

	for (int i = index - 1; i >= 0; i--)
	{
		switch (arr[i])
		{
		case (10):
		{
			printf("a");
			break;
		}
		case (11):
		{
			printf("b");
			break;
		}
		case (12):
		{
			printf("c");
			break;
		}
		case (13):
		{
			printf("d");
			break;
		}
		case (14):
		{
			printf("e");
			break;
		}
		case (15):
		{
			printf("f");
			break;
		}
		default:
		{
			printf("%d", arr[i]);
			break;
		}
		}
	}

	return 0;
}
