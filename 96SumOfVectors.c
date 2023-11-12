//SumOfVectors
#include<stdio.h>
#include<string.h>
 

struct vector
{
    int x;
    int y;
};

void calcSum(struct vector v1,struct vector v2,struct vector sum);

int main()
{
    struct vector v1={5,10};
    struct vector v2={3,20};
    struct vector sum={0};
    calcSum(v1,v2,sum);

}
void calcSum(struct vector v1,struct vector v2,struct vector sum)
{
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;
    printf("Sum Of The Vector X component is :%d\n",sum.x);
    printf("Sum Of The Vector y Component is :%d\n",sum.y);
}