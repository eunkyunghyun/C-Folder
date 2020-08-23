#include <stdio.h>
#include <string.h>

int main(void)
{
    int a, b, c;
    int mul;
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int count5 = 0;
    int count6 = 0;
    int count7 = 0;
    int count8 = 0;
    int count9 = 0;
    char num[100];

    scanf("%d %d %d", &a, &b, &c);
    mul = a * b * c;
    sprintf(num, "%d", mul);

    for (int i = 0; i < strlen(num); i++)
    {
        if (num[i] == '0')
            count0 += 1;
        else if (num[i] == '1')
            count1 += 1;
        else if (num[i] == '2')
            count2 += 1;
        else if (num[i] == '3')
            count3 += 1;
        else if (num[i] == '4')
            count4 += 1;
        else if (num[i] == '5')
            count5 += 1;
        else if (num[i] == '6')
            count6 += 1;
        else if (num[i] == '7')
            count7 += 1;
        else if (num[i] == '8')
            count8 += 1;
        else if (num[i] == '9')
            count9 += 1;
    }

    printf("%d\n", count0);
    printf("%d\n", count1);
    printf("%d\n", count2);
    printf("%d\n", count3);
    printf("%d\n", count4);
    printf("%d\n", count5);
    printf("%d\n", count6);
    printf("%d\n", count7);
    printf("%d\n", count8);
    printf("%d\n", count9);

    return 0;
}
