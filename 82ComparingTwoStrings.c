// 82ComparingTwoStrings
// if returns 0,then the strings are equal,positive-1st>2nd,negative-1st<2nd
#include <stdio.h>
#include<string.h>
int main()
{
    char firstStr[]="Apple";
    char secondStr[]="Banana";
    printf("%d\n",strcmp(firstStr,secondStr));
    printf("%d\n",strcmp(secondStr,firstStr));
}
