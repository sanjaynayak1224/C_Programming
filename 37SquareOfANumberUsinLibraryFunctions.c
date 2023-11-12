//37SquareOfANumberUsinLibraryFunctions
#include<stdio.h>
#include<math.h>
void printsquare(int value);

int main()
{   
    int a;
    printf("Enter the number :");
    scanf("%d",&a);
    printsquare(a);
    return 0;
}

void printsquare(int value)
{
    value= pow(value,2);
    printf("The Square Of The Number Is : %d",value);
}
