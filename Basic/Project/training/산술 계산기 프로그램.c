#include <stdio.h>

int main(void)
{
	int first, second;
	int result = 0;
	char op;
	
	printf("ù��° ����, �ι�° ����, ��ȣ�� ������� �Է��ϼ���: ");
	scanf_s("%d %c %d", &first, &op, &second);
	
	if (op == '+')
		result = first + second;
	else if (op == '-')
		result = first - second;
	else if (op == '*')
		result = first * second;
	else if (op == '/')
		result = first / second;

	printf("��� ����� %d�Դϴ�.", result);
}