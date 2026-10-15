#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "hello";
    int count = 0;
    for (int i = 0; i < sizeof(st); i++)
    {
        count++;
    }

    printf("%d", count);
}