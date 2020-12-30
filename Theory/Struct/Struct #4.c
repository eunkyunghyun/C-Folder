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
	struct Student s[3] = {
		{"C", "000100", 20, 2},
		{"C++", "000101", 22, 3},
		{"C#", "000102", 24, 4} };

	char name[20];

	printf("Please enter the name you want to find: ");
	scanf("%s", name);

	for (int i = 0; i < 3; i++)
	{
		if (strcmp(s[i].name, name) == 0)
		{
			printf("Name: %s, ID: %s, Age: %d, Grade: %d\n",
				s[i].name, s[i].id, s[i].age, s[i].grade);
			break;
		}
	}

	return 0;
}