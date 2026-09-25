#include <stdio.h>

void fib(int n)
{
    if (n < 1)
    {
        printf("invalid number");
        return;
    }

    int prev1 = 1;
    int prev2 = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i > 2)
        {
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
            printf(" %d", curr);
        }
        else if (i == 1)
        {
            printf("%d", prev2);
        }
        else if (i == 2)
        {
            printf(" %d", prev1);
        }
    }
}

int main()
{
    fib(9);
    return 0;
}