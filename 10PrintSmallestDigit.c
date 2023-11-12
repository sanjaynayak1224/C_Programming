// PrintSmallestDigit
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter The Numbers :");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("%d", b);
    }
    else
    {
        printf("not applicable");
    }
}
