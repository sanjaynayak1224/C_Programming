// //array
// #include<stdio.h>
// int main()
// {
//     int marks[]={97,98,99};             //array
//     float marks1[]={100.00,101.00,102.00};    
//     return 0;
     
// }

//taking input and output of array 
#include<stdio.h>
int main()
{
int marks[3];
printf("physics :");
scanf("%d",&marks[0]);

printf("chem :");
scanf("%d",&marks[1]);

printf("maths :");
scanf("%d",&marks[2]);

printf("phy = %d,chem= %d , maths = %d",marks[0],marks[1],marks[2]);
return 0;
}