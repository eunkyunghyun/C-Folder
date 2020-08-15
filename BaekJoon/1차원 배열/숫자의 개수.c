#include <stdio.h>
#include <string.h>

int main(void)
{
    int a, b, c;
    int mul;
    int count[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    char num[100];

    scanf("%d %d %d", &a, &b, &c);
    mul = a * b * c;
    sprintf(num, "%d", mul);

    for (int i = 0; i < strlen(num); i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            if (j == (int)num[i])
                count[j] += 1;
        }
    }

    return 0;
}