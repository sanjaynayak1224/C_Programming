//AreaOfSquareCircleRectangle                               //2 methods
#include<stdio.h>                                                              
void areaofsquare(float a);
void areaofcircle(float b);
void areaofrect(float c,float d);

int main()
{  
    float a,b,c,d; 
    printf("Enter The Side Of The Square :");
    scanf("%f",&a);
    printf("Enter The Radius Of The Circle :");
    scanf("%f",&b);void areaofsquare(float a);
   printf("Enter The Length And Breadth Of The Rectangle :");
    scanf("%f %f",&c,&d);
    areaofsquare(a);
    areaofcircle(b);
    areaofrect(c,d);
    return 0;
}

void areaofsquare(float a)
{
    float area= a*a;
    printf("The Area Of The Square is : %f\n",area);
}

void areaofcircle(float b)
{
    float area = 3.14*b*b;
    printf("The Area Of The Circle is : %f\n",area);
}

void areaofrect(float c,float d)
{
    float area = c*d;
    printf("The Area Of The Rectangle Is : %f\n",area);
}

/*another way of writing this code
#include<stdio.h>
float areaofsquare(float a);
float areaofcircle(float b);
float areaofrect(float c,float d);

int main()
{  
    float a,b,c,d; 
    printf("Enter The Side Of The Square :");
    scanf("%f",&a);
    printf("Enter The Radius Of The Circle :");
    scanf("%f",&b);
    printf("Enter The Length And Breadth Of The Rectangle :");
    scanf("%f %f",&c,&d);
    printf("The Area Of The Square is : %f\n",areaofsquare(a));     //another way of calling
    printf("The Area Of The Circle is : %f\n",areaofcircle(b));
    printf("The Area Of The Rectangle is : %f\n",areaofrect(c,d));
    return 0;
}

float areaofsquare(float a)
{
    return a*a;
    
}

float areaofcircle(float b)
{
     return 3.14*b*b;
}

float areaofrect(float c,float d)
{
    return c*d;
    
}
*/


