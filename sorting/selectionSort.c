#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num[6] = {5, 3, 2, 4, 6, 1};
    int size = sizeof(num) / sizeof(num[0]);

    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (num[j] < num[min])
            {
                min = j;
            }
        }
        swap(&num[min], &num[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", num[i]);
    }
}

