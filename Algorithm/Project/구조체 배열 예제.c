/* #include <stdio.h>
#define SIZE 3

struct student {
	int number;
	char name[20];
	double grade;
};

int main(void)
{
	struct student list[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
	{
		printf("�й��� �Է��ϼ���: ");
		scanf("%d", &list[i].number);

		printf("�̸��� �Է��ϼ���: ");
		scanf("%s", list[i].name);

		printf("������ �Է��ϼ���: ");
		scanf("%lf", &list[i].grade);

		printf("\n");
	}

	for (i = 0; i < SIZE; i++)
		printf("�й�: %d, �̸�: %s, ����: %f\n", list[i].number, list[i].name, list[i].grade);

	return 0;
}
*/