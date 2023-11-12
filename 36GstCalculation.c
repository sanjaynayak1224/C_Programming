//GstCalculation
#include<stdio.h>
void printprice(float value);
int main()
{   
    float value = 100;
    printprice(value);
    return 0;
}

void printprice(float value)
{   
    value=value + (0.18*value);
    printf("The Final Price is : %f",value);
}