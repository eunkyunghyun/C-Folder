/* #include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct player {
	int hp;
	int atk;
	int spe;
};

int main(void)
{
	struct player p1;
	struct player p2;
	int choice;

	srand(time(NULL));

	p1.hp = 100;
	p2.hp = 100;
	p1.atk = (rand() % 10) + 5;
	p2.atk = (rand() % 10) + 5;
	p1.spe = (rand() % 15) + 10;
	p2.spe = (rand() % 15) + 10;

	while (p1.hp > 0 || p2.hp > 0)
	{
		printf("==============================\n");
		printf("����� �����Դϴ�: ");
		scanf_s("%d", &choice);
		if ((rand() % 2) + 1 == 1) 
		{
			printf("�Ϲ� ����!\n");
			p2.hp -= p1.atk;
		}

		else
		{
			printf("Ư�� ����!\n");
			p2.hp -= p1.spe;
		}

		if (p2.hp <= 0)
		{
			printf("==============================\n\n");
			printf("==============================\n");
			printf("����� �¸�!\n");
			printf("==============================\n");
			break;
		}

		printf("==============================\n");
		printf("��ǻ���� �����Դϴ�.\n");
		if ((rand() % 2) + 1 == 1)
		{
			printf("�Ϲ� ����!\n");
			p1.hp -= p2.atk;
		}

		else
		{
			printf("Ư�� ����!\n");
			p1.hp -= p2.spe;
		}

		if (p1.hp <= 0)
		{
			printf("==============================\n\n");
			printf("==============================\n");
			printf("��ǻ�� �¸�!\n");
			printf("==============================\n");
			break;
		}

		printf("==============================\n");
		printf("[�����] ü��: %d, �Ϲ� ���ݷ�: %d, Ư�� ���ݷ�: %d\n", p1.hp, p1.atk, p1.spe);
		printf("[��ǻ��] ü��: %d, �Ϲ� ���ݷ�: %d, Ư�� ���ݷ�: %d\n", p2.hp, p2.atk, p2.spe);
		printf("==============================\n\n");
	}

	return 0;
}
*/