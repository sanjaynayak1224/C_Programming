//59PointerArithmetic
#include<stdio.h>
int main()
{
    int age =22;
    int *ptr=&age;
    printf("%u\n",ptr);
    ptr++;
    printf("%u\n",ptr);
    ptr--;
    printf("%d",ptr);
    return 0;
}
