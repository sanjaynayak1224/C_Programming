//StringAsPointer
#include<stdio.h>
int main()
{
    char *canchange="hello world";//as pointers ,can be reinitialized
    puts(canchange);
    canchange="sanjay";        //reinitialized
    puts(canchange);
    char cannotchange[]="hello"; //as character array cannnot be reinintialized
       //cannotchange[]="sanjay"; cannot be reinitialized
    
    puts(cannotchange);
}