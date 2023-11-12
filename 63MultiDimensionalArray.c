//MultiDimensionalArray
//storing 3 subjects of 2 students
#include<stdio.h>
int main()
{
    int marks[2][3];
    marks[0][0]=100;
    marks[0][1]=99;
    marks[0][2]=98;

    marks[1][0]=89;
    marks[1][1]=75;
    marks[1][2]=75;

    printf("%d",marks[0][0]);
    return 0;

}
