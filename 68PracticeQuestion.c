//in an array of numbers,find how many times does a number x occurs
#include<stdio.h>
#include<math.h>
int array(int arr[],int n,int x);

int main()
{
    int arr[]={1,2,3,3,3,3,4,4,5};
    int x;
    printf("Enter the Number :");
    scanf("%d",&x);
    printf("%d",array(arr,9,x));
    return 0;
}

int array(int arr[],int n,int x)
{
    int count =0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            count ++;
        }
    }
    return count;
}