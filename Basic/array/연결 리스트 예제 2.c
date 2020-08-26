#include <stdio.h>
#include <stdlib.h>

struct NODE
{
	struct NODE* next;
	int year;
	char name[100];
};

int main(void)
{
	struct NODE* head = malloc(sizeof(struct NODE));

	struct NODE* node1 = malloc(sizeof(struct NODE));
	head->next = node1;

	printf("도서 제목을 입력하세요: ");
	scanf("%s", &node1->name[100]);

	printf("출판 연도를 입력하세요: ");
	scanf("%d", &node1->year);

	struct NODE* node2 = malloc(sizeof(struct NODE));
	node1->next = node2;
	
	printf("도서 제목을 입력하세요: ");
	scanf("%s", &node2->name[100]);

	printf("출판 연도를 입력하세요: ");
	scanf("%d", &node2->year);

	node2->next = NULL;

	struct NODE* curr = head->next;

	while (curr != NULL)
	{
		printf("도서 제목: %s, 출판 연도: %d\n", curr->name[100], curr->year);
		curr = curr->next;
	}

	free(node1);
	free(node2);
	free(head);

	return 0;
}
