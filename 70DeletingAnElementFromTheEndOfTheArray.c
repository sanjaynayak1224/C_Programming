//DeletingAnElementFromTheEndOfTheArray
#include <stdio.h>

int main()
{
    int n, ele;
    printf("enter the size of the array:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Element number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Elements before deleting : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");
    printf("Enter the element to be deleted :");
    scanf("%d", &ele);
    
    printf("elements after deleting :");
    for (int i = 0; i <(n-1); i++)
    {
        printf("%d\t",arr[i]);
    }
}
