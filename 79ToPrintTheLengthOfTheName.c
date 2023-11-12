// ToPrintTheLengthOfTheName
//function method
#include <stdio.h>
int getlength(char arr[]);
int main()
{
    char name[100];
    fgets(name, 100, stdin);
    printf("%d",getlength(name));
    return 0;
}

int getlength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count - 1;
}

/*or
#include<stdio.h>
int main()
{
    char name[100];
    fgets(name,100,stdin);
    int count =0;
    for(int i=0;name[i]!= '\0';i++) 
    {
        count ++;
    }
    printf("%d",count-1);
}
*/