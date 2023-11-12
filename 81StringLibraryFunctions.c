//StringLibraryFunctions
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100]="sanjay";
    char str2[]="nayak";
    strcat(str1,str2);       //concatenation,joins 2 strings and stores it into the first string
    puts(str1);

}