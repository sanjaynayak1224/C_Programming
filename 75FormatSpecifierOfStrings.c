//FormatSpecifierOfStrings
#include<stdio.h>
void printstring(char arr[]);

int main()
{
    char name[50];
    scanf("%s",name);
    printf("your name is %s",name);  //single line  code 
    return 0;
}

//we use format specifier "%s" inorder to scan
//and print the entered string at a time(with a single line of code) 
//instead of printing it one by one using functions in the previous
//program

//basically we use "%s" when we have to take input and output using scanf
//and printf