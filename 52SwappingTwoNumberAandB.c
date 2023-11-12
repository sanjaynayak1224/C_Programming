//SwappingTwoNumberAandB            
#include<stdio.h>
 void swap(int *a,int *b);      //PassByReference

 int main()
 {  
    int a,b;
    a=5 ; b=6;
    printf(" before : a=%d b=%d\n",a,b);
    swap(&a,&b);
    printf("after : a=%d b=%d\n",a,b);
    return 0;
 }
 void swap(int *a,int *b )
 {
    int temp=*a;
    *a=*b;                                                  
    *b=temp;
 }
/*Pass by value doesn't work for swapping because it creates copies of the
variables being passed, and modifications within the function do not affect the original variables.
*/
