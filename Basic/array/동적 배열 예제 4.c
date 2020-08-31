#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Movie {
	double score;
	char title[100];
};

int main(void)
{
	struct Movie* p;
	int n;

	printf("영화 횟수를 입력하세요: ");
	scanf("%d", &n);

	p = (struct Movie*)malloc(n * sizeof(struct Movie));

	if (p == NULL)
	{
		printf("메모리 할당 오류\n");
		exit(1);
	}

	for (int i = 0; i < n; i++)
	{
		printf("영화 제목을 입력하세요: ");
		scanf("%s", &(p + i)->title);
		printf("영화 평점을 입력하세요: ");
		scanf("%lf", &(p + i)->score);
	}

	for (int i = 0; i < n; i++)
		printf("영화 제목: %s, 영화 평점: %lf\n", (p + i)->title, (p + i)->score);

	free(p);

	return 0;
}
