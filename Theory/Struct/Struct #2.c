#include <stdio.h>

struct Student
{
	char name[20];
	char id[20];
	int age;
	int grade;
};

int main(void)
{
	struct Student s[3];
	
	for (int i = 0; i < 3; i++)
	{
		printf("Please enter your name, id, age, grade: ");
		scanf("%s %s %d %d", s[i].name, s[i].id, &s[i].age, &s[i].grade);
	}

	for (int i = 0; i < 3; i++)
	{
		printf("Name: %s, ID: %s, Age: %d, Grade: %d\n",
			s[i].name, s[i].id, s[i].age, s[i].grade);
	}

	return 0;
}