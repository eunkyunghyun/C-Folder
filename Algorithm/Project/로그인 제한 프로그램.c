/* #include <stdio.h>

int main(void)
{
	int id = 1234;
	int password = 1234;
	int enter_id, enter_password;
	static int chance;
	int enter_chance;

	printf("====================\n");

	printf("�α��� �ѵ��� �Է��ϼ���: ");
	scanf_s("%d", &enter_chance);

	while (1)
	{
		chance++;

		printf("====================\n");

		printf("���̵� �Է��ϼ���: ");
		scanf_s("%d", &enter_id);

		printf("��й�ȣ�� �Է��ϼ���: ");
		scanf_s("%d", &enter_password);

		if (chance == enter_chance)
		{
			printf("�α��� ���� %d��\n", chance);
			break;
		}

		if (id == enter_id && password == enter_password)
		{
			printf("�α��� ����\n");
			break;
		}

		else
		{
			printf("�α��� ���� %d��\n", chance);
			continue;
		}
		
	}

	printf("====================");

	return 0;
}
*/