#include <stdio.h>

int main()
{

    printf("enter a number: ");
    int n;
    scanf("%d", &n);

    int count = 0;
    int temp;
    int new;
    while (n != 0)
    {
        temp = n % 10;
        n = n / 10;
        count = count * 10 + temp;
    }

    printf("%d", count);
}