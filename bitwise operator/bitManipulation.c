#include <stdio.h>

int main()
{
    int a = 12;
    int b = 6;

    int x = a & b; // 4
    int y = a | b; // 14
    int z = a ^ b; // 10
    int p = a << b;
    int q = a >> b;

    printf("AND  = %d\n", x);
    printf("OR  = %d\n", y);
    printf("XOR  = %d\n", z);
    printf("Left shift  = %d\n", p);
    printf("right shift = %d\n", q);
}