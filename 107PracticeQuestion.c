// make a program to input student information from a user and enter it to file.
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fptr;
    fptr = fopen("info.txt", "w");
    char name[100];
    int age;
    float cgpa;
    printf("enter name :");
    scanf("%s", &name);
    printf("enter age :");
    scanf("%d", &age);
    printf("Enter cgpa:");
    scanf("%f", &cgpa);
    fprintf(fptr, "%s\t,", name);
    fprintf(fptr, "%d\t,", age);
    fprintf(fptr, "%f\t", cgpa);
    fclose(fptr);
    return 0;
}