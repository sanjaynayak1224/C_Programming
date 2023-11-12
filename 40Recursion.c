//Recursion
//to print hello 5 times and to print hello n times,two programs
#include<stdio.h>
void printhello(int count);

int main()
{   
    printhello(5);
    return 0;
}

//recursive function
void printhello(int count)
{
    if(count==0)
    {
        return;
    }
    printf("Hello\n");
        printhello(count-1);

}


/*to print hello n times 
#include<stdio.h>
void printhello(int count);

int main()
{       
    int n;
    printf("Enter the Number of times:");
    scanf("%d",&n);
    printhello(n);
    return 0;
}

//recursive function
void printhello(int count)
{
    if(count==0)
    {
        return;
    }
    printf("Hello\n");
        printhello(count-1);

}
*/


