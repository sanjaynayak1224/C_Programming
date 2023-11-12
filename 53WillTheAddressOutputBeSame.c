//WillTheAddressOutputBeSame
//Answer : No
// #include<stdio.h>
// void address(int n);        //call by value
// int main()
// {  
//     int n=4; 
//     printf("%p\n",&n);
//     address(n);
//     return 0;
// }

// void address(int n)
// {
//     printf("%p\n",&n);
// }


#include<stdio.h>
void _address(int *n);

int main()
{
    int n=4;
    printf("%p\n",&n);
    _address(&n);
    printf("%p\n",&n);
    return 0;
}


void _address(int *n)
{
    printf("%p\n",n);
}

