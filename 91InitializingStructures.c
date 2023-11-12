//InitializingStructures
#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student s1={1664,9.2,"sanjay"};      //in a single line instead
                                                // of s1.roll,s1.cgpa,and name
    printf("student roll : %d",s1.roll);  
    return 0;                                              
}