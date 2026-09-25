#include <stdio.h>

int main()
{
    int arr[] = {4, 5, 6, 2, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 6;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            for (int j = i; j < size - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            size--;
            i--;
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");

    return 0;
}
