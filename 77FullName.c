// FullName
#include <stdio.h>
int main()
{
    char fullname[100];
    //  scanf("%s",fullname); scanf cannot put multiword string with spaces
    // so we use gets(),fgets() and puts()
    // printf("your Firstame is %s",fullname);


    //gets(fullname);this is dangerous and outdated
    fgets(fullname,100,stdin);
   printf("your name is :");
    puts(fullname);
    return 0;
}