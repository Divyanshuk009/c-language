#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void select(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(&arr[min], &arr[i]);
    }
}

int main()
{
    int num[6] = {3, 12, 5, 64, 10, 11};
    
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", num[i]);
    }
}