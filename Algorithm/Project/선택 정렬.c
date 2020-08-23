#include <stdio.h>

int main(void)
{
    int min, temp;
    int arr[5] = { 3, -2, 0, 1, 5 };

    for (int i = 0; i < 4; i++)
    {
        min = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }

    for (int i = 0; i < 5; i++)
        printf("%d\n", arr[i]);

    return 0;
}