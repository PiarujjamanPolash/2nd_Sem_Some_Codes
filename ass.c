#include <stdio.h>

long long int cache[1000] = { 0 };

long long int fibonacci(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;
    long long int f = cache[n];
    if(f == 0)
    {
        f = fibonacci(n - 1) + fibonacci(n - 2);
        cache[n] = f;
    }
    return f;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%lld\n", fibonacci(n+1));
    return 0;
}
