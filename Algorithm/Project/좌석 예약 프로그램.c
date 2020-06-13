/* #include <stdio.h>
#define SIZE 10

int main(void)
{
	char whether;
	int i, seat;
	int seats[SIZE] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	while (1)
	{
		printf("--------------------------------\n");
		printf("좌석을 예약하시겠습니까(Y/N): ");
		scanf_s("%c", &whether);

		if (whether == 'Y')
		{
			for (i = 0; i < SIZE; i++)
			{
				printf("%d ", seats[i]);
			}

			printf("\n좌석 번호를 입력하세요: ");
			scanf_s("%d", &seat);

			if (seats[seat - 1] != 1)
			{
				seats[seat - 1] = 1;
				printf("좌석 예약이 완료되었습니다.\n");
			}
			else
			{
				printf("좌석은 이미 예약되었습니다.\n");
			}
		}
		else 
			break;
	}
	return 0;
}
*/