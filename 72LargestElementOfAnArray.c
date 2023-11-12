// LargestElementOfAnArray
#include <stdio.h>
void initialize(int arr[], int n);
void show(int arr[], int n);
void check(int arr[], int n);
int main()
{
    int n;
    printf("Enter The Size Of The Array:");
    scanf("%d", &n);
    int arr[n];
    initialize(arr,n);
    show(arr,n);
    check(arr,n);
    return 0;
}

void initialize(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("element %d:", i + 1);
        scanf("%d", &arr[i]);
    }
}

void show(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

void check(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }
    }
    printf("\n");
    printf("%d", arr[0]);
}
