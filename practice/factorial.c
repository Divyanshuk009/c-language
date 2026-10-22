#include <stdio.h>

int main()
{
    printf("enter a number: ");

    int a, ans;
    int fact = 1;
    scanf("%d", &a);

    for (int i = a; i > 0; i--)
    {
        fact *= i;
    }
    printf("%d", fact);
}