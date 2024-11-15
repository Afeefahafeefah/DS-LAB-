
#include <stdio.h>
int factorial(int n) 
{
    if (n < 0) 
    {
        return -1; 
    }
    if (n == 0 || n == 1)
    {
        return 1; 
    }
    return n * factorial(n - 1);
}

int main() 
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int result = factorial(number);
    if (result == -1) 
    {
        printf("Factorial not defined for negative numbers.\n");
    } 
    else 
    {
        printf("Factorial of %d is %d\n", number, result);
    }
   
    return 0;
}
