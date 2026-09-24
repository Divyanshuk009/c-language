#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter three numbers\n");
    scanf("%d%d%d", &a, &b, &c);
    int sum = a + b + c;
    printf("sum of given three numbers is: %d", sum);

    return 0;
}