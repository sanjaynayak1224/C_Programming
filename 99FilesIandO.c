//FilesIandO

//FILE *fptr;        (declaring/creating the file)

//opening a file
//fptr=fopen("filename",mode);  (mode=read(r) or write(w))
//closing a file
//fclose(fptr);
#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr=fopen("test.text","r");
    fclose(fptr);
    return 0;
}

/*"r"=open to read
"rb"=open to read in binary
"w"=open to write
"wb"=open to write in binary
"a"=open to append
*/
