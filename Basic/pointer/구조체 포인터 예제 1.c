/* #include <stdio.h>

struct student {
	int number;
	char name[10];
	double grade;
};

int main(void)
{
	struct student* p;
	struct student s = { 20030403, "홍길동", 4.6 };
	
	p = &s;

	printf("학번 = %d, 이름 = %s, 학점 = %lf\n", s.number, s.name, s.grade);
	printf("학번 = %d, 이름 = %s, 학점 = %lf\n", (*p).number, (*p).name, (*p).grade);

	return 0;
}
*/