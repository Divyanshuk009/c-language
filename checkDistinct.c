#include <stdio.h>

int main()
{
    int arr[] = {4, 5, 7, 1, 2};
    int length = sizeof(arr) / sizeof(arr[0]);
    int isDistinct = 1;

    for (int i = 0; i < length && isDistinct; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (arr[i] == arr[j])
            {
                isDistinct = 0;
                break;
            }
        }
    }

    if (isDistinct)
    {
        printf("distinct\n");
    }
    else
    {
        printf("not distinct\n");
    }

    return 0;
}