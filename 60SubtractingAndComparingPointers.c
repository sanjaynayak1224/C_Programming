//SubtractingAndComparingPointers
#include<stdio.h>
int main()
{
    int age=22;
    int _age=23;
    int *ptr1=&age;
    int *ptr2=&_age;
    printf("%u\n",ptr1);
    printf("%u\n",ptr2);
    printf("%u\n",ptr1-ptr2);
    ptr2=&age;
    printf("%u\n",ptr1==ptr2);

}

//note=6422292-6422288=4= 1 integer difference,thats why the output is 1
//in 11th line of the code;