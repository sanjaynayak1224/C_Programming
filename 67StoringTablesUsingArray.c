//create a 2d array,storing the tables of 2 and 3
#include <stdio.h>

void tables(int table[][10], int n, int m,int number);


int main() {
    int table[2][10];
    tables(table,0,10,2);  
    printf("\n"); 
    tables(table,1,10,3); 


    return 0;
}

void tables(int table[][10], int n, int m,int number)
{
    for(int i=0;i<m;i++)
    {
        table[n][i]=number*(i+1);
        printf("%d\t",table[n][i]);
    }
}
       

