// divisibleby2
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number :");
    scanf("%d", &a);
    if (a % 2 == 0)
        printf("%d is divisible by 2", a);
    else
        printf("%d is not divisible by 2", a);
    return 0;
}

/*in terms of true of false
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number :");
    scanf("%d", &a);
        printf("%d", a%2==0);
    return 0;
}
*/

