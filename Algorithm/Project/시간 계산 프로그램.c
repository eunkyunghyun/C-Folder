/* #include <stdio.h>
#define SEC_PER_MINUTE 60

int main(void)
{
	int input, minute, second, hour;

	printf("�ʴ����� �ð��� �Է��ϼ���: ");
	scanf_s("%d", &input);

	second = input % SEC_PER_MINUTE;
	minute = input / SEC_PER_MINUTE;
	hour = minute / 60;
	minute = minute - hour * 60;

	printf("%d�ʴ� %d�� %d�� %d���Դϴ�.", input, hour, minute, second);

	return 0;
}
*/