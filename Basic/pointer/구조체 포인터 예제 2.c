/* #include <stdio.h>

struct birth {
	int year;
	int month;
	int day;
};

struct student {
	int number;
	char name[10];
	double grade;
	struct birth* dob;
};

int main(void)
{
	struct birth d = { 1996, 6, 17 };
	struct student s = { 20061027, "ȫ�浿", 4.9 };
	
	s.dob = &d;

	printf("�й� = %d, �̸� = %s, ���� = %f\n", s.number, s.name, s.grade);
	printf("�������: %d�� %d�� %d��\n", s.dob->year, s.dob->month, s.dob->day);

	return 0;
}
*/