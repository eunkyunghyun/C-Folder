/* #include <stdio.h>

int main(void)
{
	int arr[] = { 1, 6, 12, 4, 0, 13, 5 };
	int max = arr[0], min = arr[0];
	int max_loc = 0, min_loc = 1;
	int* p;

	p = arr;

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		if (*(p + i) > max)
		{
			max = *(p + i);
			max_loc = i + 1;
		}

		if (*(p + i) < min)
		{
			min = *(p + i);
			min_loc = i + 1;

		}
	}

	printf("최대값 = %d, 최대값 위치 = %d\n", max, max_loc);
	printf("최소값 = %d, 최소값 위치 = %d\n", min, min_loc);

	return 0;
}
*/