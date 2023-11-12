// ReversingAnArray
#include <stdio.h>
void reverse(int arr[], int n);
void printing(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    reverse(arr, 6);
    printing(arr, 6);
    return 0;
}

void reverse(int arr[], int n)
{
    for (int i = 0; i < (n / 2); i++)
    {
        int firstval = arr[i];
        int secondval = arr[n - i - 1];
        arr[i] = secondval;
        arr[n - i - 1] = firstval;
    }
}

void printing(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
