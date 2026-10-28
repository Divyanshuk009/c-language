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
        return 0;
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
