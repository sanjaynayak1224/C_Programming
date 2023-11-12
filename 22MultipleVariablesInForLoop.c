// MultipleVariablesInForLoop
#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Enter the Number of numbers :");
    scanf("%d", &n);
    for (int i = 1, j=n; i <= n && j>=1 ;i++,j--)
    {
        sum = sum + i;
        printf("%d\n",j);
    }
    printf("The Sum is %d \n", sum);
    return 0;
}