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
		printf("�¼��� �����Ͻðڽ��ϱ�(Y/N): ");
		scanf_s("%c", &whether);

		if (whether == 'Y')
		{
			for (i = 0; i < SIZE; i++)
			{
				printf("%d ", seats[i]);
			}

			printf("\n�¼� ��ȣ�� �Է��ϼ���: ");
			scanf_s("%d", &seat);

			if (seats[seat - 1] != 1)
			{
				seats[seat - 1] = 1;
				printf("�¼� ������ �Ϸ�Ǿ����ϴ�.\n");
			}
			else
			{
				printf("�¼��� �̹� ����Ǿ����ϴ�.\n");
			}
		}
		else 
			break;
	}
	return 0;
}
*/