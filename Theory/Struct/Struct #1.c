#include <stdio.h>
#include <string.h>

struct Student
{
	char name[20];
	char id[20];
	int age;
	int grade;
};

int main(void)
{
	struct Student s;

	printf("Please enter your name: ");
	scanf("%s", s.name);

	printf("Please enter your number: ");
	scanf("%s", s.id);

	printf("Please enter your age: ");
	scanf("%d", &s.age);

	printf("Please enter your grade: ");
	scanf("%d", &s.grade);

	printf("Name: %s, Number: %s, Age: %d, Grade: %d\n", s.name, s.id, s.age, s.grade);

	return 0;
}