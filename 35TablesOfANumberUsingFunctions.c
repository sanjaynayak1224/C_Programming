// TablesOfANumberUsingFunctions
#include <stdio.h>
void tables(int a);

int main()
{
    int a;
    printf("Enter The Number:");
    scanf("%d", &a);
    tables(a);
    return 0;
}
void tables(int a)
{
    
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", a * i);
    }
}


