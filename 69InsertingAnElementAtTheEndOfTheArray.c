// InsertingAnElementAtTheEndOfTheArray
//method 1:function method
#include <stdio.h>
void initialize(int arr[], int n);
void beforeinsert(int arr[], int n);
void afterinsert(int arr[],int  n);
int main()
{
    int n;
    printf("enter the size of the array:");
    scanf("%d", &n);
    int arr[n];
    initialize(arr, n);
    beforeinsert(arr, n);
    afterinsert(arr,n);
    
    return 0;
}

void initialize(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter Element number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void beforeinsert(int arr[], int n)
{
    int ele;
    printf("Elements before inserting : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}
void afterinsert(int arr[], int n)
{
        int ele;
    printf("Enter the element to be inserted :");
    scanf("%d", &ele);
    arr[n] = ele;

    printf("elements after inserting :");
    for (int i = 0; i <= n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

/*method 2:easy method
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

    printf("Elements before inserting : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");
    printf("Enter the element to be inserted :");
    scanf("%d", &ele);
    arr[n]=ele;
    
    printf("elements after inserting :");
    for (int i = 0; i <=n; i++)
    {
        printf("%d\t",arr[i]);
    }
}
*/