//PercentageUsingFunctions
#include<stdio.h>
float percentage(float a,float b,float c);

int main()
{  
    float a,b,c;
    printf("Enter marks in each subject :");
    scanf("%f %f %f",&a,&b,&c);
    printf("The Percentage is : %f",percentage(a,b,c));
    return 0;
}

float percentage(float a,float b,float c)
{
    return ((a+b+c)/300)*100;
}

/*or
#include<stdio.h>
float percentage(float a,float b,float c);

int main()
{  
    printf("The Percentage is : %f",percentage(97,98,90));
    return 0;
}

float percentage(float a,float b,float c)
{
    return ((a+b+c)/300)*100;
}
*/