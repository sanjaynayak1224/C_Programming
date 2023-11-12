// PracticeQuestion
// write a program to store the data of 3 students
#include <stdio.h>
#include <string.h>
struct student
{
    char name[100];
    int rollNumber;
    float cgpa;
};

int main()
{
    struct student s1;
    s1.rollNumber = 1;
    s1.cgpa = 8.5;
    strcpy(s1.name, "sanjay");
    printf("Student 01 Name:%s\n", s1.name);
    printf("Student 01 RollNumber:%d\n", s1.rollNumber);
    printf("Student 01 cgpa:%f\n", s1.cgpa);
    printf("\n");

    struct student s2;
    s2.rollNumber = 2;
    s2.cgpa = 9.0;
    strcpy(s2.name, "utkarsh");
    printf("Student 02 Name:%s\n", s2.name);
    printf("Student 02 RollNumber:%d\n", s2.rollNumber);
    printf("Student 02 cgpa:%f\n", s2.cgpa);
    printf("\n");

    struct student s3;
    s3.rollNumber = 3;
    s3.cgpa = 9.8;
    strcpy(s3.name, "umar");
    printf("Student 03 Name:%s\n", s3.name);
    printf("Student 03 RollNumber:%d\n", s3.rollNumber);
    printf("Student 03 cgpa:%f\n", s3.cgpa);
    return 0;
}
