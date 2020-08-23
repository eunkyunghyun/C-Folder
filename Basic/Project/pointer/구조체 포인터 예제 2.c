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
	struct student s = { 20061027, "홍길동", 4.9 };
	
	s.dob = &d;

	printf("학번 = %d, 이름 = %s, 학점 = %f\n", s.number, s.name, s.grade);
	printf("생년월일: %d년 %d월 %d일\n", s.dob->year, s.dob->month, s.dob->day);

	return 0;
}
*/