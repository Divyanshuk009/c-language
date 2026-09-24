#include <stdio.h>

// Function to calculate factorial
int factorial(int n)
{
    // Base case: factorial of 0 is 1
    if (n == 0)
    {
        return 1;
    }
    // Recursive case: calculate factorial using recursion
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int num;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        // Calculate factorial and print the result
        printf("Factorial of %d is %d\n", num, factorial(num));
    }

    return 0;
}
