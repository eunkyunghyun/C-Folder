#include <stdio.h>
#define SIZE 2
int get_max_stu(struct student s[]);

struct student {
	int number;
	char name[10];
	int grade;
};

int main(void)
{
	struct student s[SIZE];

	for (int i = 1; i <= SIZE; i++)
	{
		printf("%d번째 학생의 학번, 이름, 성적을 순서대로 입력하세요: ", i);
		scanf("%d %s %d", &s[i-1].number, s[i-1].name, &s[i-1].grade);
	}

	get_max_stu(s);

	return 0;
}

int get_max_stu(struct student s[])
{
	int sample;
	sample = s[0];

	for (int i = 0; i < SIZE; i++)
	{
		if ()
	}
}