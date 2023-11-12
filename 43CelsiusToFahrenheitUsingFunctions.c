//CelsiusToFahrenheitUsingFunctions             //2 methods
#include<stdio.h>
float c(int a);
 
int main()
{ 
    float a;
    printf("Enter Celcius value:");
    scanf("%f",&a);
    printf("Value is %f",c(a));
    return 0;
}

float c(int a)
{
    
   return (a*1.8) + 32;
}

/*or
#include<stdio.h>
float c(int a);
 
int main()
{ 
    printf("Value is %f",c(100));
    return 0;
}

float c(int a)
{
    
   return (a*1.8) + 32;
}
*/