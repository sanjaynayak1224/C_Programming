// SwitchStatement
#include <stdio.h>
int main()
{
    int day; // 1-monday,2-tuesday,3-wednesday
    printf("Enter The Day :");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("It Is Monday");
        break;
    case 2:
        printf("It Is Tuesday");
        break;
    case 3:
        printf("It Is Wednesday");
        break;
    default:
        printf("not a valid day");
    }
    return 0;
}