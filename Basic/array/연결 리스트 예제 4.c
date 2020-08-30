#include <stdio.h>
#include <stdlib.h>

struct NODE
{
	struct NODE* next;
	char name[100];
	int price;
};

int main(void)
{
	struct NODE* head = malloc(sizeof(struct NODE));

	struct NODE* node1 = malloc(sizeof(struct NODE));
	head->next = node1;

	printf("과일 이름을 입력하세요: ");
	scanf("%s", &node1->name[100]);

	printf("과일 가격을 입력하세요: ");
	scanf("%d", &node1->price);

	struct NODE* node2 = malloc(sizeof(struct NODE));
	node1->next = node2;

	printf("과일 이름을 입력하세요: ");
	scanf("%s", &node2->name[100]);

	printf("과일 가격을 입력하세요: ");
	scanf("%d", &node2->price);

	struct NODE* node3 = malloc(sizeof(struct NODE));
	node2->next = node3;

	printf("과일 이름을 입력하세요: ");
	scanf("%s", &node3->name[100]);

	printf("과일 가격을 입력하세요: ");
	scanf("%d", &node3->price);

	struct NODE* node4 = malloc(sizeof(struct NODE));
	node3->next = node4;

	printf("과일 이름을 입력하세요: ");
	scanf("%s", &node4->name[100]);

	printf("과일 가격을 입력하세요: ");
	scanf("%d", &node4->price);

	node4->next = NULL;

	struct NODE* curr = head->next;

	while (curr != NULL)
	{
		printf("과일 이름: %s, 과일 가격: %d\n", curr->name[100], curr->price);
		curr = curr->next;
	}

	free(node1);
	free(node2);
	free(node3);
	free(node4);
	free(head);

	return 0;
}
