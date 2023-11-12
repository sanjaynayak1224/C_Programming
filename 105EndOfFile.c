//EndOfFile(EOF)
#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fptr;
    fptr=fopen("test3.txt","r");
    char ch;
    ch=fgetc(fptr);
    while(ch!=EOF){
        printf("%c",ch);
        ch=fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
    return 0;
}
