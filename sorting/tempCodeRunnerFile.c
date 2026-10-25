#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bbSort(int arr[], int si)
{
    for (int i = 0; i < si; i++)
    {
        for (int j = 0; j < si - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main()
{
    int num[6] = {8, 3, 4, 7, 1, 5};
    bbSort(num, 6);

    for (int i = 0; i < 6; i++)
    {

        printf("%d ", num[i]);
    }

    return 0;
}