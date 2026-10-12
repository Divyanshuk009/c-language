#include <stdio.h>

int main()
{

    int a = 12;
    int b = 18;
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }

    printf("%d", a);
}
