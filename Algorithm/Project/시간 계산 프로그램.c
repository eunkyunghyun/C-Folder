/* #include <stdio.h>
#define SEC_PER_MINUTE 60

int main(void)
{
	int input, minute, second, hour;

	printf("초단위의 시간을 입력하세요: ");
	scanf_s("%d", &input);

	second = input % SEC_PER_MINUTE;
	minute = input / SEC_PER_MINUTE;
	hour = minute / 60;
	minute = minute - hour * 60;

	printf("%d초는 %d시 %d분 %d초입니다.", input, hour, minute, second);

	return 0;
}
*/