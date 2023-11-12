#include <stdio.h>
int main()
{
    char arr[100];
    fgets(arr,100,stdin);
    printf("your name is :");
    puts(arr);
}