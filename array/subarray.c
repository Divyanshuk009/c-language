#include <stdio.h>

int main()
{
    int arr[6] = {3, 4, 5, 6, 1, 6};
    size_t length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < length; i++)
    {
        for (int j = i; j < length; j++)
        {
            printf("[");
            for (int k = i; k <= j; k++)
            {
                printf(" %d ", arr[k]);
            }
            printf("]");
        }
        printf("\n");
    }
}