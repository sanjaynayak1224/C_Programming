//write a function named slice,which takes a string and returns a sliced
//string from index n to m.
#include<stdio.h>
#include<string.h>
void slice(char str[],int n,int m);
int main()
{
    char str[100];
    int n,m;
    fgets(str,100,stdin);
    printf("Enter the indexes of n and m :");
    scanf("%d %d",&n,&m);
    slice(str,n,m);
    return 0;
}

void slice(char str[],int n,int m)
{   
    int j=0;
    char newStr[100];
    for(int i=n;i<=m;i++,j++)
    {
        newStr[j]=str[i];
    }
    newStr[j]='\0';
    puts(newStr);
}