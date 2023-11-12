// PointersToStructures
#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student s1 = {1664, 9.2, "sanjay"};
    printf("student roll : %d\n", s1.roll);
    struct student *ptr = &s1;
    printf("student roll with ptr:%d\n", (*ptr).roll);
     //or
    printf("student roll with ptr->roll:%d\n", ptr->roll); //arrow operator
    

    return 0;
}