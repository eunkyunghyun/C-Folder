#include <stdio.h>

int main() 
{
    int N, X, A;
    int i;

    scanf_s("%d %d", &N, &X);

    for (i = 0; i < N; i++) 
    {
        scanf_s("%d", &A);
        if (X > A)
            printf("%d\n", A);
    }

    return 0;
}