#include <stdio.h>

int main()
{

    printf("enter age: ");
    int n;
    scanf("%d", &n);

    n >= 19 ? printf("adult ") : printf("minor ");
    ;
}