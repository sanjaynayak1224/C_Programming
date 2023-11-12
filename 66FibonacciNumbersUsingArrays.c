// FibonacciNumbersUsnigArrays
#include <stdio.h>
void fibonacci(int fib[], int n);
int main()
{
    int n;
    printf("Enter the Value of n(n>2):");
    scanf("%d", &n);
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    fibonacci(fib, n); 
    return 0;
}

void fibonacci(int fib[], int n)
{
    for(int i=2;i<n;i++)
    {
     fib[i]=fib[i-1]+fib[i-2];
     printf("%d\t",fib[i]);
    }
}


