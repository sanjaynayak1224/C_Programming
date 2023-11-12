// AveragOfNumbers
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    int average;
    printf("Enter the Numbers :");
    scanf("%d %d %d", &num1, &num2, &num3);
    average = (num1 + num2 + num3) / 3;
    printf(" average : %d", average);
    return 0;
}

/* or
#include<stdio.h>
int main()
{
   int num1,num2,num3;
   printf("Enter the Number 1 :");
   scanf("%d",&num1);
    printf("Enter the Number 2 :");
   scanf("%d",&num2);
    printf("Enter the Number 3:");
   scanf("%d",&num3);

int  average = (num1+num2+num3)/3;
   printf(" average : %d",average);
   return 0;
}
*/