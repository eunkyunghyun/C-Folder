#include <stdio.h>

int main(void)
{
	int first, second;
	int result = 0;
	char op;
	
	printf("첫번째 숫자, 두번째 숫자, 부호를 순서대로 입력하세요: ");
	scanf_s("%d %c %d", &first, &op, &second);
	
	if (op == '+')
		result = first + second;
	else if (op == '-')
		result = first - second;
	else if (op == '*')
		result = first * second;
	else if (op == '/')
		result = first / second;

	printf("계산 결과는 %d입니다.", result);
}