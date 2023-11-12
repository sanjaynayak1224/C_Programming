//83TakingStringAsInputUsing "%c" specifier

#include<stdio.h>
int main()
{
    char str[100];
    char ch;
    int i=0;

    //alternate for fgets() function
    while(ch !='\n')        //(until we press enter)
    {
        scanf("%c",&ch);
        str[i]=ch;
        i++;
    }
    str[i]='\0';
    puts(str);

}