// Pointers
#include <stdio.h>

int main()
{
    int age = 22;
    int *ptr = &age; // pointer
    int _age = *ptr;
    printf("%d", _age);
    return 0;
}