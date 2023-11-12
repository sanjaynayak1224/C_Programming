//check if a given character is present in a string or not
#include<stdio.h>
#include<string.h>
void check(char str[],char ch );
int main()
{   
    char str[100];
    fgets(str,100,stdin);
    char ch;
    printf("Enter The Charcter to be checked:");
    scanf("%c",&ch);
    check(str,ch);
    return 0;
}

void check(char str[],char ch)
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            printf("The Charcter Is Present");
            return;
        }
    }
    printf("The Charcter Is Not Present");
}