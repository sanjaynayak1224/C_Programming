// 2 numbers-a and b,are written in a file.write a program to replace
// them with their sum.
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("AandB.txt", "r");
    int a;
    int b;
    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);
    fclose(fptr);
    fptr = fopen("AandB.txt", "w");
    int sum = a + b;
    fprintf(fptr, "%d", sum);
    fclose(fptr);
    return 0;
}