/* #include <stdio.h>

int main(void)
{
	int id = 1234;
	int password = 1234;
	int enter_id, enter_password;
	static int chance;
	int enter_chance;

	printf("====================\n");

	printf("로그인 한도를 입력하세요: ");
	scanf_s("%d", &enter_chance);

	while (1)
	{
		chance++;

		printf("====================\n");

		printf("아이디를 입력하세요: ");
		scanf_s("%d", &enter_id);

		printf("비밀번호를 입력하세요: ");
		scanf_s("%d", &enter_password);

		if (chance == enter_chance)
		{
			printf("로그인 실패 %d번\n", chance);
			break;
		}

		if (id == enter_id && password == enter_password)
		{
			printf("로그인 성공\n");
			break;
		}

		else
		{
			printf("로그인 실패 %d번\n", chance);
			continue;
		}
		
	}

	printf("====================");

	return 0;
}
*/