//ReadingFromAfile2
#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("test2.txt", "r");
    int ch;
    fscanf(fptr, "%d", &ch);
    printf("character = %d\n", ch);
    fscanf(fptr, "%d", &ch);
    printf("character = %d\n", ch);
    fscanf(fptr, "%d", &ch);
    printf("character = %d\n", ch);
    
    return 0;
}