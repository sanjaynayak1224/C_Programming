/*Write A Function That Prints Namaste If User Is Indian And Bonjour
If The User Is French
*/
#include <stdio.h>
void namaste();
void bonjour();
int main()
{
    printf("Enter f for french and i for indian:");
    char ch;
    scanf("%c", &ch);
    if (ch == 'i')
    {
        namaste();
    }
    else
    {
        bonjour();
    }
    return 0;
}

void namaste()
{
    printf("namaste\n");
}

void bonjour()
{
    printf("bonjour\n");
}