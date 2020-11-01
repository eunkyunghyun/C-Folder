#include <stdio.h>

int main(void)
{
	int decimal = 0;
	int index = 0;
	int arr[100] = { 0 };

	printf("Please enter the decimal number: ");
	scanf("%d", &decimal);

	while (1)
	{
		arr[index] = decimal % 2;
		decimal = decimal / 2;
		index += 1;
		if (decimal / 2 == 0)
		{
			arr[index] = decimal % 2;
			break;
		}
	}

	for (int i = index; i >= 0; i--)
	{
		printf("%d", arr[i]);
	}

	return 0;
}
