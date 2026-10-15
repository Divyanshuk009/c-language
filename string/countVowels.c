#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "aurangabad ji";
    int count = 0;
    int space = 0;
    for (int i = 0; i < sizeof(st); i++)
    {
        if (st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u')
        {
            count++;
        }

        if (st[i] == ' ')
        {
            space++;
        }
    }

    printf("%d\n", count);
    printf("%d", space);
}