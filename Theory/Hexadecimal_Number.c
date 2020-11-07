#include <stdio.h>

int main(void)
{
	int decimal;
	int index = 0;
	int arr[100] = { 0 };
	char str[100];
	char c[100];

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

	for (int i = index; i > 0; i--)
	{
		switch (arr[i])
		{
		case (10):
		{
			str[i] = "A";
			break;
		}
		case (11):
		{
			str[i] = "B";
			break;
		}
		case (12):
		{
			str[i] = "C";
			break;
		}
		case (13):
		{
			str[i] = "D";
			break;
		}
		case (14):
		{
			str[i] = "E";
			break;
		}
		case (15):
		{
			str[i] = "F";
			break;
		}
		default:
		{
			sprintf(c, "%d", arr[i]);
			str[i] = c;
			break;
		}
		}
	}

	for (int i = index; i > 0; i--)
	{
		printf("%s", str[i]);
	}

	return 0;
}
