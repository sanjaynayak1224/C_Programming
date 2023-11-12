//create a string firstname and lastname to store details of user
//and print all the characters using a loop
#include<stdio.h>
void printstring(char arr[]);
int main()
{
    char firstname[]="sanjay";
    char lastname[]="nayak";
    printstring(firstname);
    printstring(lastname);

}

void printstring(char arr[])
{
    for(int i=0;arr[i] !='\0'  ; i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}