// PrintNumbersFrom0Ton WithWhileLoop
#include <stdio.h>
int main()
{
    int n;
    int i = 0;
    printf("Enter The Number Of Times :");
    scanf("%d", &n);
     while (i <= n)
    {
        printf("%d \n", i);
        i++;
    }
    return 0;
}