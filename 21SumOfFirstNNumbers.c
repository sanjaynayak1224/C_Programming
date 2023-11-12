// SumOfFirst'N'Numbers
#include <stdio.h>
int main()
{                                                             
    int n;                                                              
    int sum = 0;
    printf("Enter the Number of numbers :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)                                
    {                                                         //explanation                                                        
        sum = sum + i;                                        //sum = 0+1
    }                                                         //now sum = 1                                                      
     printf("The Sum is %d \n", sum);                        //sum=1+2
    // for( int i=n;i>=1;i--)                                    //now sum =3 
    // {
    //     printf("%d \n",i);
    // }
    return 0;                                                 
}