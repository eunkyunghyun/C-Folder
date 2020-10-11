#include <stdio.h>

int main(void)
{
	int n, m;
	int arr[101];
	int sum[10001];
	int max;
	int index = 0;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n; j++)
		{
			for (int k = 2; k < n; k++)
			{
				if (arr[i] != arr[j] && arr[j] != arr[k] && arr[k] != arr[i])
				{
					if (arr[i] + arr[j] + arr[k] <= m)
					{
						sum[index] = arr[i] + arr[j] + arr[k];
						index += 1;
					}
				}
			}
		}
	}
}
