//ToCheckIfAFileExists

#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr=fopen("NewTest.exe","r");
    if(fptr==NULL)
    {
        printf("The File Doesnot Exist");
    }
    else{
        fclose(fptr);
    }
    return 0;
}       