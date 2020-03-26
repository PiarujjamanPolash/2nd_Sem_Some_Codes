#include <stdio.h>

int factorial(int n) {
    if(n == 1) return n;
    return n * factorial(n - 1);
}

int memo[5] = { 0 };

int fibonacci(int n) {
    if(n == 0) return memo[0];
    else {
        int f = memo[n];
        if(f == 0) {
            f = fibonacci(n - 1) + fibonacci(n - 2);
            memo[n] = f;
        }
        return f;
    }
}

int main() {
    printf("%d\n", fibonacci(5));
    return 0;
}
