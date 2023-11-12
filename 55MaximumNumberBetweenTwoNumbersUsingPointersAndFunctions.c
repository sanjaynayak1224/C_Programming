// MaximumNumberBetweenTwoNumbersUsingPointersAndFunctions
#include <stdio.h>
int findmax(int *num1, int *num2);

int main()
{
    int num1, num2;
    printf("Enter The Two Numbers :");
    scanf("%d %d", &num1, &num2);
    int max= findmax(&num1,&num2);
    printf("The Maximum Number is : %d",max);
    return 0;
}

int findmax(int *num1, int *num2)
{
    if (*num1 > *num2)
    {
        return *num1;
    }
    else
    {
        return *num2;
    }
}