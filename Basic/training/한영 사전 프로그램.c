/* #include <stdio.h>
#include <string.h>
#define SIZE 5

int main(void)
{
	int i, index;
	char dictionary[SIZE][2][30] = { {"apple", "���"}, {"book", "å"}, {"car", "�ڵ���"}, {"dove", "��ѱ�"}, {"easy", "����"} };
	char word[30];

	printf("�ܾ �Է��ϼ���: ");
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

	printf("�������� Ž������ �ʾҽ��ϴ�.");
}
*/