#include <stdio.h>

int main()
{
    // 0, 1, 1,2,3,5,8,11...
    printf("Enter the number of Fibonacci numbers to generate: ");
    printf("\n");
    int count;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        if (i == 0)
        {
            printf("%d", 0);
        }
        if (i == 1)
        {
            printf("%d", 1);
        }
        if (i > 0)
        {
            int n = (i - 1) + (i + 2);
            printf(" %d ", n);
        }
    }
}