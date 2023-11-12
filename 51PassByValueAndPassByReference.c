// PassByValueAndPassByReference
#include <stdio.h.>
void square(int n);
void _square(int *n);
int main()
{
    int number = 4;
    square(number); // PassByValue
    printf("%d\n", number);
    _square(&number); // PassByReference
    printf("%d\n", number);

    return 0;
}

// PassByValue
void square(int n)
{
    n = n * n;
    printf("%d\n", n);
}

// PassByReference
void _square(int *n)
{
    *n = (*n) * (*n);
    printf("%d\n", *n);
}