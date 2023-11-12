//DynamicMemoryAllocation
/*
a.malloc()=memory allocation
b.calloc()=continuous allocation
c.free()
d.realloc()=reallocation

we must include a library function called <stdlib.h> to use dynamic 
                                                        allocation

--->malloc():
            takes numbers of bytes to be allocated ad returns  a pointer
            of type void
            syntax:
            ptr=(int*) malloc(5*sizeof(int));
                (int*)-->type casting from void to int
*/
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int *ptr;
//     ptr=(int*) malloc(5 *sizeof(int));
//     ptr[0]=1;
//     ptr[1]=2;
//     ptr[2]=3;
//     ptr[3]=4;
//     ptr[4]=5;

//     for(int i=0;i<5;i++)
//     {
//         printf("%d\n",ptr[i]);
//     }
//     return 0;
// }

/*
--->calloc():
            initializes with 0
            syntax:
                ptr=(int*)  calloc(5,sizeof(int));
*/
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int *ptr;
//     ptr=(int*) calloc(5,sizeof(int));
//     // ptr[0]=1;
//     // ptr[1]=2;
//     // ptr[2]=3;
//     // ptr[3]=4;
//     // ptr[4]=5;

//     for(int i=0;i<5;i++)
//     {
//         printf("%d\n",ptr[i]);
//     }
//     return 0;
// }

/*
--->free():
        we use it to free memory that is allocated using malloc and calloc
        syntax:
            free(ptr);
*/

// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int *ptr;
//     int n;
//     printf("enter n:");
//     scanf("%d",&n);

//     ptr=(int*) calloc(n,sizeof(int));
//     for(int i=0;i<n;i++)
//     {
//         printf("%d\n",ptr[i]);
//     }

//     free(ptr);
//     printf("\n");

//     ptr=(int*) calloc(2,sizeof(int));
//     for(int i=0;i<2;i++)
//     {
//         printf("%d\n",ptr[i]);
//     }
//     return 0;
// }


/*
--->realloc():
            reallocates(increases or decreases)memory using the same 
            pointer and size.
            syntax:
                    ptr= realloc(ptr,newSize);
*/

 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
    int *ptr;
    ptr=(int*) malloc(5 *sizeof(int));
     ptr[0]=1;
     ptr[1]=2;
     ptr[2]=3;
     ptr[3]=4;
     ptr[4]=5;

     for(int i=0;i<5;i++)
    {
         printf("%d\n",ptr[i]);
     }
    
        printf("\n");
     ptr=realloc(ptr,8);
     ptr[0]=1;
     ptr[1]=2;
     ptr[2]=3;
     ptr[3]=4;
     ptr[4]=5;
     ptr[5]=4;
     ptr[6]=5;
     ptr[7]=5;
    
     for(int i=0;i<8;i++)
    {
         printf("%d\n",ptr[i]);
     }
     free(ptr);
     return 0;
}
