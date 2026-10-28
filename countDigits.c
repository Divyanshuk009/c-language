#include <stdio.h>

int main()
{

    printf("enter a number: ");

    int digit;
    scanf("%d", &digit);
    int count = 0;

    if (digit == 0)
    {
        count = 1;
    }

    while (digit != 0)
    {
        count++;
        digit = digit / 10;
    }

    printf("%d", count);
}
