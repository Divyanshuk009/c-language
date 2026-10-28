#include <stdio.h>

int size(int n)
{
    int count = 0;
    if (n == 0)
    {
        return 1;
    }

    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

double pow(double a, int b)
{

    long long n = b;
    if (n < 0)
    {
        a = 1 / a;
        n = -n;
    }

    if (n == 0)
    {
        return 1;
    }

    if (n == 1)
    {
        return a;
    }

    double ans = pow(a, n / 2);

    if (n % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return a * ans * ans;
    }
}

int main()
{

    int num;
    printf("enter a number to check armstrong: ");
    scanf("%d", &num);

    int originalNum = num;
    // num = abs(num);

    int count = size(num);

    int temp = 0;
    int tempNum;

    while (num != 0)
    {
        tempNum = num % 10;
        num = num / 10;

        temp = temp + pow(tempNum, count);
    }

    if (temp == originalNum)
    {
        printf("armstrong");
    }
    else
    {
        printf("not");
    }
    printf("\n%d", temp);
}