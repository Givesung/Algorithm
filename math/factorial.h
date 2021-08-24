int factorial(int &n)
{
    int result = 1;
    result *= n;

    return n * factorial(n-1);
}
