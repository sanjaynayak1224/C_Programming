// FactorialOfANumber
#include <stdio.h>
int main()
{
    int n;
    int fact = 1;
    printf("Enter A Number :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("%d", fact);
    return 0;
}
