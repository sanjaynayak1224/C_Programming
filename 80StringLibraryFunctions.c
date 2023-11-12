// StringLibraryFunctions
#include <stdio.h>
#include <string.h>
int main()
{
    char name[] = "sanjay";
    printf("%zu\n", strlen(name)); // strlen() is ready made size telling function
    char str1[] = "hello";
    char str2[] = "world";
    puts(str1);
    puts(str2);
    strcpy(str1, str2); // strcpy(new str,old str) copies old str value to new str
    puts(str1);
    puts(str2);
}