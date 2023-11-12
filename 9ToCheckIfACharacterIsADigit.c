// ToCheckIfACharacterIsADigit
#include <stdio.h>
int main()
{
    char character;
    printf("Enter The Character :");
    scanf("%c", &character);
    if (character >= '0' && character <= '9')
    {
        printf("1");
    }
    else
        printf("0");
}