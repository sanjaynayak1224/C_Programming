// ShortcutToReadAndWrite
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("test3.txt", "r");
    printf("%c", fgetc(fptr));      //read shortcut
    printf("%c", fgetc(fptr));
    printf("%c", fgetc(fptr));
    printf("%c", fgetc(fptr));
    printf("%c", fgetc(fptr));
    fclose(fptr);
    printf("\n");

    fptr = fopen("test3.txt", "w");
    fputc('A', fptr);           //write shortcut
    fputc('P', fptr);
    fputc('P', fptr);
    fputc('L', fptr);
    fputc('E', fptr);
    fclose(fptr);
}