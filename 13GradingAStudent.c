// GradingAStudent
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter The Marks :");
    scanf("%d", &marks);
    if (marks >= 30 && marks < 70)
    {
        printf("B grade\n");
    }
    else if (marks >= 70 && marks < 90)
    {
        printf("A grade\n");
    }
    else if (marks >= 90 && marks < 100)
    {
        printf("A+ grade\n");
    }
    else
    {
        printf("fail\n");
    }
    return 0;
}