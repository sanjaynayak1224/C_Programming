//BankAccontDetails
//Make a structure to store Bank account infromation of a customer of 
//abc bank and make an alias for it

#include<stdio.h>
#include<string.h>


typedef struct BankAccount
{
    char name[100];
    int AccNo;
}acc;

int main()
{
    acc acc1={"Sanjay S Nayak",1233566};
    printf("Account name: %s\n",acc1.name);
    printf("account number:%d\n",acc1.AccNo);
}