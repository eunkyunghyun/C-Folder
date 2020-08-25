#include <stdio.h>

int main()
{
    int n;

    scanf_s("%d", &n);

    if (n < 100)
        printf("%d", n);
    else
    {
        int sum;
        int a, b, c;

        sum = 99;

        for (int i = 100; i <= n; i++)
        {
            a = i / 100;
            b = i / 10 % 10;
            c = i % 10;

            if ((c - b) == (b - a))
                sum++;
        }

        printf("%d", sum);
    }

    return 0;
}
