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
		printf("당신의 차례입니다: ");
		scanf_s("%d", &choice);
		if ((rand() % 2) + 1 == 1) 
		{
			printf("일반 공격!\n");
			p2.hp -= p1.atk;
		}

		else
		{
			printf("특수 공격!\n");
			p2.hp -= p1.spe;
		}

		if (p2.hp <= 0)
		{
			printf("==============================\n\n");
			printf("==============================\n");
			printf("사용자 승리!\n");
			printf("==============================\n");
			break;
		}

		printf("==============================\n");
		printf("컴퓨터의 차례입니다.\n");
		if ((rand() % 2) + 1 == 1)
		{
			printf("일반 공격!\n");
			p1.hp -= p2.atk;
		}

		else
		{
			printf("특수 공격!\n");
			p1.hp -= p2.spe;
		}

		if (p1.hp <= 0)
		{
			printf("==============================\n\n");
			printf("==============================\n");
			printf("컴퓨터 승리!\n");
			printf("==============================\n");
			break;
		}

		printf("==============================\n");
		printf("[사용자] 체력: %d, 일반 공격력: %d, 특수 공격력: %d\n", p1.hp, p1.atk, p1.spe);
		printf("[컴퓨터] 체력: %d, 일반 공격력: %d, 특수 공격력: %d\n", p2.hp, p2.atk, p2.spe);
		printf("==============================\n\n");
	}

	return 0;
}
*/