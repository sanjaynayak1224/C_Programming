// typedefKeyword
// used to create alias for data types
#include <stdio.h>
#include <string.h>

typedef struct student
{
    int roll;
    float cgpa;
    char name[100];
} stu; // nickname or alias

typedef struct ComputerEngineeringStudent
{
    int roll;
    float cgpa;
    char name[100];
} coe; // nickname or alias

int main()
{
    // struct student s1;
    stu s1; // typedef in play
    s1.roll = 1345;
    s1.cgpa = 9.8;
    strcpy(s1.name, "sanjay");
    // struct ComputerEngineeringStudent s2;
     coe s2; // typedef in play
    s2.roll = 1345;
    s2.cgpa = 9.8;
    strcpy(s2.name, "idiot");

    printf("%s\n", s1.name);
    printf("%d\n", s1.roll);
    printf("%f\n", s1.cgpa);
    printf("%s\n", s2.name);
    printf("%d\n", s2.roll);
    printf("%f\n", s2.cgpa);
}