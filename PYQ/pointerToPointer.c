#include <stdio.h>

int main()
{

    int a = 10;

    int *ptr1 = &a;
    int **ptr2 = &ptr1;

    printf("%d\n", *ptr1);
    printf("%d", **ptr2);
}