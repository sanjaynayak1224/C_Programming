//23TableOfAGivenNumber
#include<stdio.h>
int main()
{
    int n;
    int product  ;
    printf("Enter The Number :");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        product= n *i;
        printf("%d\n",product);

    }
    
    return 0;
}