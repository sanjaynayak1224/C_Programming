//find the salted form of a pasword entered by user if the salt is "123"
// and added at the end
#include<stdio.h>
#include<string.h>
int main()
{
    char password[20];
    printf("Enter the password:");
    scanf("%s",password);
    char salt[20]="123";
    char newpassword[20];
    strcat(password,salt);
    strcpy(newpassword,password);
    puts(newpassword);
}
