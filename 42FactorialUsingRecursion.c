//FactorialUsingRecursion
#include<stdio.h>
int factorial(int n);
int main()
{   
    printf("The Factorial is : %d",factorial(5));
    return 0;
}

int factorial(int n)
{ 
    if(n==0)
    {
        return 1;
    }    
    int factorialNm1=factorial(n-1);
    int factorialN= factorialNm1*n;
    return factorialN;
}
