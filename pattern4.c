#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 1; k < i; k++)
        {
            printf(" "); // leading spaces
        }

        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            printf("%d ", j);
        }

        printf("\n"); // move to next row only once
    }

    return 0;
}