//write a program to write all the odd numbers from 1 to n in a file
#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fptr;
    fptr=fopen("OddNumbers2.txt","w");
    int n;
    int numbers;
    printf("Enter the Value of n:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        if(i%2!=0)
        {
            fprintf(fptr,"%d\t",i);
        }
    }
    fclose(fptr);
    return 0;
}