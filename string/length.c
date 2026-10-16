#include <stdio.h>
#include <string.h>

int main()
{
    char sd[] = "hello";
    int count = 0;
    for (int i = 0; i < sizeof(sd); i++)
    {
        count++;
    }

    printf("%d", count);
}