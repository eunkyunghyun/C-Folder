/* #include <stdio.h>

struct student {
	int number;
	char name[10];
	double grade;
};

int main(void)
{
	struct student* p;
	struct student s = { 20030403, "ȫ�浿", 4.6 };
	
	p = &s;

	printf("�й� = %d, �̸� = %s, ���� = %lf\n", s.number, s.name, s.grade);
	printf("�й� = %d, �̸� = %s, ���� = %lf\n", (*p).number, (*p).name, (*p).grade);

	return 0;
}
*/