#include <stdio.h>

int main()
{
    int arr[5] = {5, 3, 2, 6, 8};
    for (int i = 0; i < 5; i++)
    {
        // printf("%x", &arr[i]); // address
        // printf("\n");
        // printf("%u", &arr[i]); // unsignrd integer
        // printf("\n");

        printf("%d", (arr + i));
        printf("\n");
    }

    // int num[5] = {3};
    // printf("%d", num[0]);
}