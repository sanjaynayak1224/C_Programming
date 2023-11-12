//ProgramToRead5IntegersFromAFile
#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fptr;
    fptr=fopen("test4.txt","r");
    
    int a;
    while (fscanf(fptr, "%d", &a) != EOF) {
        printf("%d ", a);
    }
    printf("\n");
    return 0;
}