//write a program to enter price of 3 items and print their final
//cost with gst

#include<stdio.h>
int main()
{
    float price[3];
    printf("Enter 3 prices:");
    scanf(" %f %f %f",&price[0],&price[1],&price[2]);
    printf("Total price 1 : %f\n",price[0]+(price[0]*0.18));
    printf("Total price 2 : %f\n",price[1]+(price[1]*0.18));
    printf("Total price 3 : %f\n",price[2]+(price[2]*0.18));
    return 0;

}

