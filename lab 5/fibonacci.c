#include <stdio.h>
int fib(int n); 
int main() 
{ 
    int n, fibonacci;
    printf("Enter number: ");
    scanf("%d", &n);
    fibonacci = fib(n); 
    printf("Fibonacci of %d is %d\n", n, fibonacci);
    return 0; 
}

int fib(int n) 
{ 
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    return fib(n - 1) + fib(n - 2); 
}
