//SumOfNNaturalNoUsingRecursion
#include<stdio.h>
int sum(int n);

int main()
{
    printf("The sum is: %d",sum(5));
    return 0;
}

int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    int sumNM1= sum(n-1);
    int sum= sumNM1+n;
    return sum;

}