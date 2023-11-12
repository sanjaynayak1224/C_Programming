//SumOfFirstNNumbersUsingFuntions
#include <stdio.h>
void printsum(int value);

int main()
{
    int n;
    printf("Entet the number :");
    scanf("%d", &n);
    printsum(n);
    return 0;
}

void printsum(int value)
{
    int sum=0;
    for (int i = 1; i <= value; i++)
    {
        sum = sum + i;

        
    }
    printf("The Sum Is : %d", sum);
}
