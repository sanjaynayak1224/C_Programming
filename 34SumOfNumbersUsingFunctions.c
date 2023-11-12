// SumOfNumbersUsingFunction
#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a, b;
    printf("Enter 1st Number :");
    scanf("%d", &a);
    printf("Enter 2nd Number :");
    scanf("%d", &b);
    int s = sum(a, b);
    printf("%d\n", s);
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}