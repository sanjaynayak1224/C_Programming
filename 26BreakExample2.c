// KeepTakingNumbersAsInputFromUserUntilUserEntersANumberWhichIsMultipleOf7
#include <stdio.h>
int main()
{

    int n;
    while (1)
    {
        printf("Enter a number :");
        scanf("%d", &n);
        printf("%d\n", n);
        if (n % 7 == 0)
        {
            break;
        }
        
    }
    printf("Thankyou");
}