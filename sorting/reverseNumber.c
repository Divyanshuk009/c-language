#include <stdio.h>

int reverse(int n)
{

    int rev = 0, temp;

    while (n != 0)
    {
        temp = n % 10;
        rev = rev * 10 + temp;
        n = n / 10;
    }
    return rev;
}

int main()
{

    printf("enter a number: ");
    int digit;
    scanf("%d", &digit);
    int r2 = reverse(digit);
    printf("%d", r2);
}