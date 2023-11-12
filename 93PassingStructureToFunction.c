// PassingStructureToFunction
#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    float cgpa;
    char name[100];
};

void printInfo(struct student s1);

int main()
{   
    struct student s1={1223,9.2,"sanjay"};
    printInfo(s1);
    return 0;
}

void printInfo(struct student s1)
{
    printf("student roll :%d\n", s1.roll);
    printf("Student cgpa:%f\n",s1.cgpa);
    printf("Student Name :%s\n",s1.name);
}
