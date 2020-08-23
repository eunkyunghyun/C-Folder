/* #include <stdio.h>
#include <string.h>
#define SIZE 5

int main(void)
{
	int i, index;
	char dictionary[SIZE][2][30] = { {"apple", "사과"}, {"book", "책"}, {"car", "자동차"}, {"dove", "비둘기"}, {"easy", "쉬운"} };
	char word[30];

	printf("단어를 입력하세요: ");
	scanf_s("%s", word);
	
	index = 0;
	
	for (i = 0; i < SIZE; i++)
	{
		if (strcmp(dictionary[index][0], word) == 0)
		{
			printf("%s: %s\n", word, dictionary[index][1]);
			return 0;
		}
		index++;
	}

	printf("사전에서 탐색되지 않았습니다.");
}
*/